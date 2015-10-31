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


        /// <summary>
        ///     Retrieve the name of the application that is calling into this
        /// </summary>
        /// <returns>Returns the name of the application by using reflection</returns>
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

        /// <summary>
        ///     Write the message out as required
        /// </summary>
        /// <param name="type"></param>
        /// <param name="message"></param>
        private void Output(LogType type, string message)
        {
            Console.ForegroundColor = ConsoleColor.White;

            Console.Write("[");
            switch (type)
            {
                case LogType.Normal:
                    Console.ForegroundColor = ConsoleColor.Green;
                    break;
                case LogType.Warning:
                    Console.ForegroundColor = ConsoleColor.Yellow;
                    break;
                case LogType.Error:
                    Console.ForegroundColor = ConsoleColor.Red;
                    break;
            }
            Console.Write(message);
            Console.ForegroundColor = ConsoleColor.White;
            Console.Write("] ");

            Console.WriteLine("[{0}] [{1}] {2}", GetCallingApplicationName(), string.Empty, Message);

        }

        /// <summary>
        ///     Write the message out that is to be used
        /// </summary>
        /// <param name="message">The message that we are writing out</param>
        /// <param name="parameters"></param>
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
