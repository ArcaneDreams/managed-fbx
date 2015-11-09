using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Reflection;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.IO;
using ArcManagedFBX.Shared.Time;

namespace ArcManagedFBX.Shared
{
    public enum LogType
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

        private FileInfo m_ExecutingAssemblyInfo = null;

        public static Logger Instance
        {
            get
            {
                return instance ?? (instance = new Logger());
            }
        }

        private string ExecutingDirectory
        {
            get
            {
                return ExecutingAssembly.Directory.FullName;
            }
        }

        private FileInfo ExecutingAssembly
        {
            get
            {
                return m_ExecutingAssemblyInfo ?? (m_ExecutingAssemblyInfo = new FileInfo(Assembly.GetExecutingAssembly().FullName));
            }
        }


        /// <summary>
        ///     Retrieve the name of the application that is calling into this
        /// </summary>
        /// <returns>Returns the name of the application by using reflection</returns>
        private static string GetCallingApplicationName()
        {
            Assembly currentCallingAssembly = Assembly.GetCallingAssembly();
            if (currentCallingAssembly != null)
                return currentCallingAssembly.GetName(false).Name;

            return string.Empty;
        }

        private const string DEFAULT_FILE_NAME = "output.log";

        private Logger()
        {

        }

        /// <summary>
        ///     Write the message out as required
        /// </summary>
        /// <param name="type">The type of log message that we are outputting</param>
        /// <param name="message">The message that we are logging out</param>
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
            Console.Write(type.ToString().ToUpper());
            Console.ForegroundColor = ConsoleColor.White;
            Console.Write("] ");

            Console.WriteLine("[{0}] [{1}] {2}", GetCallingApplicationName(), DateTimeHelper.DateTimeFormatted, message);

        }

        /// <summary>
        ///     Write the message out that is to be used
        /// </summary>
        /// <param name="message">The message that we are writing out</param>
        /// <param name="parameters">The parameters that we are to format with the string</param>
        public static void LogMessage(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message that was specified is either null or empty.");

            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);

            Instance.Output(LogType.Normal, message);
        }   

        public static void LogWarning(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message that was specified is either null or empty.");
            
            // Check whether any parameters were defined, if they were then append appropriately.
            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);

            Instance.Output(LogType.Warning, message);
        }

        public static void LogError(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message that was specified is either null or empty.");

            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);

            Instance.Output(LogType.Error, message);
        }
    }
}
