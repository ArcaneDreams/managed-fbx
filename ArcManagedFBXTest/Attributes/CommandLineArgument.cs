using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArcManagedFBXTest.Attributes
{
    [AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
    public class CommandLineArgument : Attribute
    {
        public string ArgumentName { get; set; }

        public bool ArgumentRequired { get; set; }

        public string ArgumentValue { get; set; }

        public CommandLineArgument(string name, bool required = false)
        {
            this.ArgumentName = name;
            this.ArgumentRequired = required;
        }
    }
}
