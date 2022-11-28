using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.JavaScript;
using System.Threading;
using System.Threading.Tasks;
using ILGPU;
using ILGPU.Runtime;
using ILGPUwebCompiler;
using Microsoft.CodeAnalysis;

public partial class Program
{
    static Compiler c = new Compiler();
    public static void Main(string[] args)
    {
        FillOptimizationLevelDropDown();
    }

    [JSExport]
    internal static async Task Compile(string kernel, bool debug, bool assertions, int optimizationLevel)
    {
        var output = await c.CompileAndRun(CodeBuilder.getCode(kernel, debug, assertions, (ILGPU.OptimizationLevel)optimizationLevel));

        //Console.WriteLine("second thread1");
        Service.SetOutput(output);
        //new Thread(() => SecondThread(CodeBuilder.getCode(kernel, debug, assertions, (ILGPU.OptimizationLevel)optimizationLevel))).Start();

    }
    static async void SecondThread(string code)
    {
        Console.WriteLine("second thread");
        var output = await c.CompileAndRun(code);

        Console.WriteLine("second thread1");
        Service.SetOutput(output);
        Console.WriteLine("second thread2");
    }
    private static void FillOptimizationLevelDropDown()
    {
        Service.FillOptimizationLevelDropDown(ILGPU.OptimizationLevel.Debug.ToString(), (int)ILGPU.OptimizationLevel.Debug);
        Service.FillOptimizationLevelDropDown(ILGPU.OptimizationLevel.Release.ToString(), (int)ILGPU.OptimizationLevel.Release);
        Service.FillOptimizationLevelDropDown(ILGPU.OptimizationLevel.O2.ToString(), (int)ILGPU.OptimizationLevel.O2);
    }
}
