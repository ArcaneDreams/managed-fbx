using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using ArcManagedFBX;

namespace ArcManagedFBXTest.Tests
{
    public abstract class TestBase
    {
        public string TestName { get; private set; }

        private TestBase()
        {

        }

        public TestBase(string name)
        {
            this.TestName = name;
        }

        public abstract void Operation(FBXMesh mesh);
    }
}
