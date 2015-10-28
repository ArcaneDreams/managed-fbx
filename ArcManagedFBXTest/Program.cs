using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArcManagedFBXTest
{
    class Program
    {
        static void Main(string[] args)
        {
            Framework.Instance.Initialize(args);
            Framework.Instance.Process();

            Console.ReadKey();
        }
    }
}
