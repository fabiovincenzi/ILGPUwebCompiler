import { dotnet } from './dotnet.js'

const is_browser = typeof window != "undefined";
if (!is_browser) throw new Error(`Expected to be running in a browser`);

const { setModuleImports, getAssemblyExports, getConfig, runMainAndExit } = await dotnet
    .withDiagnosticTracing(false)
    .withApplicationArgumentsFromQuery()
    .create();

var select = document.getElementById("select"),
    arr = ["html", "css", "java", "javascript", "php", "c++", "node.js", "ASP", "JSP", "SQL"];
for (var i = 0; i < arr.length; i++) {
    addElementToSelect(arr[i]);
}
function addElementToSelect(item) {
    var option = document.createElement("OPTION"),
        txt = document.createTextNode(arr[i]);
    option.appendChild(txt);
    option.setAttribute("value", arr[i]);
    select.insertBefore(option, select.lastChild);
}

const loader = document.querySelector(".loader");
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
                    loader.classList.add("loader-hidden");
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

var source = `private static void TestKernel(Index1D index, ArrayView<int> input, ArrayView<int> output)
{
    output[index] = input[index];
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