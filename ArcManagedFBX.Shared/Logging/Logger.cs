using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Reflection;
using System.Diagnostics;
using System.Runtime.InteropServices;

namespace ArcManagedFBX.Shared
{
    public class Logger
    {
        private static Logger instance = null;

        public static Logger Instance
        {
            get
            {
                return instance ?? (instance = new Logger());
            }

            private set
            {
                instance = value;
            }
        }

        private string ExecutingDirectory
        {
            get
            {
                return string.Empty;
            }
        }

        private const string DEFAULT_FILE_NAME = "output.log";

        private Logger()
        {

        }

        public static void LogMessage(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
            {

            }
        }

        public static void LogWarning(string message, params object[] parameters)
        {
        }

        public static void LogError(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
            {

            }
        }
    }
}
