using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsumerNetFrameworkConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            CppWinrtComponent.Class demo = new CppWinrtComponent.Class();
            var name = demo.GetModule();
        }
    }
}
