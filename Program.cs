using System;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.JavaScript;
using System.Threading;
using System.Threading.Tasks;
using ILGPUwebCompiler;

public partial class Program
{
    static Compiler c = new Compiler();
    public static void Main(string[] args)
    {
        
    }

    [JSExport]
    internal static async Task<string> Compile(string source)
    {
        var output = await c.CompileAndRun(CodeBuilder.getCode(source));
        return output;
    }
}
