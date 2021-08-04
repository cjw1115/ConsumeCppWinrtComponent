using System;

namespace ConsumerNet5Console
{
    class Program
    {
        static void Main(string[] args)
        {
            CppWinrtComponent.Class demo = new CppWinrtComponent.Class();
            var name = demo.GetModule();
            Console.WriteLine("Hello World!");
        }
    }
}
