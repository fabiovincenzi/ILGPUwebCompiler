namespace ILGPUwebCompiler
{
    public static class CodeBuilder
    {
        private static string usings = @"using System;
using ILGPU.Backends.EntryPoints;
using ILGPU.Backends.PTX;
using ILGPU.Runtime.Cuda;
using ILGPU;
using ILGPUwebCompiler;
using ILGPU.Runtime.CPU;
using System.Reflection;
using System.Threading;
";
        private static string opening = @"namespace ConsoleApp {
    class Program {
";
        private static string main = @"public static void Main()
{
    using var context = Context.Create(builder => builder
        .CPU(new CPUDevice(2, 1, 1)) // Use a very simplistic CPU accelerator instance
        // .Assertions() // Uncomment to use assertions
        // .Debug() // Uncomment to enable debug symbols
        .Optimize(OptimizationLevel.O2));

    using var backend = new PTXBackend(
        context,
        CudaArchitecture.SM_70,
        CudaInstructionSet.ISA_70,
        null);

    var entryPoint = EntryPointDescription.FromExplicitlyGroupedKernel(
        typeof(Program).GetMethod(nameof(TestKernel),
        BindingFlags.NonPublic | BindingFlags.Static));

    var compiledKernel = backend.Compile(entryPoint, default) as PTXCompiledKernel;
    Console.WriteLine(compiledKernel!.PTXAssembly);

}
";
        private static string closing = @" }
}";
        public static string getCode(string kernel)
        {
            return usings + opening + kernel + main + closing;
        }
    }
}
