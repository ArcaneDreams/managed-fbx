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
    enum LogType
    {
        Normal = 1,
        Warning,
        Error
    }

    /// <summary>
    ///     The logger class that is responsible for outputting log content
    /// </summary>
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

        private string GetCallingApplicationName()
        {
            Assembly currentCallingAssembly = Assembly.GetCallingAssembly();
            if (currentCallingAssembly != null)
                return currentCallingAssembly.FullName.ToString();

            return string.Empty;
        }

        private const string DEFAULT_FILE_NAME = "output.log";

        private Logger()
        {

        }

        private void Output(LogType type, string message)
        {

        }

        public static void LogMessage(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message that was specified is either null or empty.");
        }

        public static void LogWarning(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message that was specified is either null or empty.");
        }

        public static void LogError(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message that was specified is either null or empty.");

        }
    }
}
