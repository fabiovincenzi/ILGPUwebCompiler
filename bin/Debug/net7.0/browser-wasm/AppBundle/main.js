import { dotnet } from './dotnet.js'

const is_browser = typeof window != "undefined";
if (!is_browser) throw new Error(`Expected to be running in a browser`);

const { setModuleImports, getAssemblyExports, getConfig, runMainAndExit } = await dotnet
    .withDiagnosticTracing(false)
    .withApplicationArgumentsFromQuery()
    .create();


var arraybuffer;
var totalFiles = 0;

//LOADING OF ASSEMBLIES FOR THE ROSLYN COMPILER
var req = new XMLHttpRequest();
req.responseType = 'json';
req.open('GET', "mono-config.json", true); //getting the config file that lists all the resources the roslyn compiler needs
req.onload = function () {
    var jsonResponse = req.response;
    arraybuffer = new Array(totalFiles);
    var loadedFiles = 0;

    for (var i = 0; i < jsonResponse.assets.length; i++) {
        if (jsonResponse.assets[i].behavior == 'assembly' && jsonResponse.assets[i].name.includes(".dll")) {
            const http = new XMLHttpRequest();
            http.onload = (e) => {
                arraybuffer[loadedFiles] = new Uint8Array(http.response);
                loadedFiles++;
                if (loadedFiles == totalFiles) { //If i loaded all the files i can enable the compile button
                    console.log("assembly laoded");
                    document.querySelector('#compile').disabled = false;
                }
            };
            http.open("GET", "./managed/".concat(jsonResponse.assets[i].name));
            http.responseType = "arraybuffer";
            http.send();
            totalFiles++;
        }

    }
};
req.send(null);

var source = `using System;
using ILGPU;
using ILGPU.Runtime;
using ILGPU.Runtime.CPU;
using ILGPU.IR.Analyses;
using ILGPU.Backends;
using ILGPU.Backends.EntryPoints;

using System.Reflection;
using System.Threading;

namespace ConsoleApp {
    class Program {

        static void MyKernel(
            Index1D index,             // The global thread index (1D in this case)
            ArrayView<int> dataView,   // A view to a chunk of memory (1D in this case)
                int constant)              // A uniform constant
    {
        dataView[index] = index + constant;
    }

  static void CompileAndLaunchAutoGroupedKernel(Accelerator accelerator)
    {
        // Access the current backend for this device
        var backend = accelerator.GetBackend();

        // Resolve and compile method into a kernel
        var method = typeof (Program).GetMethod(nameof(MyKernel), BindingFlags.NonPublic | BindingFlags.Static);
        var entryPointDesc = EntryPointDescription.FromImplicitlyGroupedKernel(method);
        var compiledKernel = backend.Compile(entryPointDesc, default );
            // Info: If the current accelerator is a CudaAccelerator, we can cast the compiled kernel to a
            // PTXCompiledKernel in order to extract the PTX assembly code.

            // -------------------------------------------------------------------------------
            // Load the implicitly grouped kernel with an automatically determined group size.
            // Note that the kernel has to be disposed manually.
            using var kernel = accelerator.LoadAutoGroupedKernel(compiledKernel);
        var launcher = kernel.CreateLauncherDelegate < Action < AcceleratorStream, Index1D, ArrayView<int>, int>>();
            // -------------------------------------------------------------------------------

            using var buffer = accelerator.Allocate1D<int>(1024);
                // Launch buffer.Length many threads and pass a view to buffer.
                // You can also use kernel.Launch; however, the generic launch method involves boxing.
                launcher(
                accelerator.DefaultStream,
                (int)buffer.Length,
                buffer.View,
                42);

                // Reads data from the GPU buffer into a new CPU array.
                // Implicitly calls accelerator.DefaultStream.Synchronize() to ensure
                // that the kernel and memory copy are completed first.
                var data = buffer.GetAsArray1D();
                for (int i = 0, e = data.Length; i < e; ++i)
                {
                if (data[i] != 42 + i)
                Console.WriteLine($"Error at element location {i}: {data[i]} found");
            }
        }

                static void Main(string[] args)
                {
                    Context c = Context.Create(builder => builder.CPU());
                foreach(Device d in c){
                    Console.WriteLine(d);
            }
                Accelerator accelerator = c.CreateCPUAccelerator(0);

                Console.WriteLine($"Performing operations on {accelerator}");
                CompileAndLaunchAutoGroupedKernel(accelerator);

        }


    }
}
                `;

document.getElementById("source").value = source;

const config = getConfig();
const exports = await getAssemblyExports(config.mainAssemblyName);

async function compile() {
    source = document.getElementById("source").value;
    var a = await exports.Program.Compile(source);
    document.getElementById("output").value = a;
}

document.getElementById('compile').addEventListener('click', compile);

runMainAndExit(config.mainAssemblyName, []);
setModuleImports("main.js", {
    references: (i) => {
        return arraybuffer[i];
    },
    totalFiles: () => totalFiles
});