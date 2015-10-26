using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.IO;

using ArcManagedFBXTest.Attributes;
using ArcManagedFBXTest.Utility;
using ArcManagedFBX;
using ArcManagedFBX.Utility;
using ArcManagedFBX.Types;
using ArcManagedFBX.Framework;
using ArcManagedFBX.Exceptions;
using ArcManagedFBX.IO;

namespace ArcManagedFBXTest
{
    public sealed class Framework
    {
        #region Singleton Shenanigans
        private static Framework instance;

        public static Framework Instance
        {
            get
            {
                return instance ?? (instance = new Framework());
            }
        } 
        #endregion

        private ArgumentHandler m_Handler = null;

        private FBXScene m_Scene = null;

        #region Properties
        [CommandLineArgument("filename",false)]
        public string Filename
        {
            get;
            set;
        } 
        #endregion

        private Framework()
        {
            m_Handler = new ArgumentHandler();
        }

        /// <summary>
        ///     Initialize the framework
        /// </summary>
        /// <param name="args">The args that we are initializing with</param>
        public void Initialize(string[] args)
        {
            if (args != null && args.Any())
                m_Handler.ParseArgs(args);
        }

        public void Process()
        {
            // Make sure to inject the arguments that are required
            m_Handler.InjectArguments(this);

            this.Load();
        }

        public void Load()
        {
            // Instantiate the manager that is to be used
            FBXManager managerInstance = ArcManagedFBX.FBXManager.Create();

            if (string.IsNullOrEmpty(Filename))
                throw new FileNotFoundException("The file that is being loaded in does not exist!");

            if (!File.Exists(Filename))
                throw new FileNotFoundException("The file that is being loaded was not found on disk.");

            FBXIOSettings settings = FBXIOSettings.Create(managerInstance, "IOSRoot");
            
            // Load in the settings and the plugins directory required
            managerInstance.SetIOSettings(settings);
            managerInstance.LoadPluginsDirectory(Environment.CurrentDirectory, "");

            int fileMajorNumber = 0, fileMinorNumber = 0, fileRevisionNumber = 0;

            // Generate the scene that is to be used
            FBXScene scene = FBXScene.Create(managerInstance, "My Scene");

            // Load in the importer that we are to use
            FBXImporter importer = FBXImporter.Create(managerInstance, "");

            bool initializeResult = importer.Initialize("Assets/dude.fbx", -1, managerInstance.GetIOSettings());
            FBXManager.GetFileFormatVersion(ref fileMajorNumber,ref fileMinorNumber,ref fileRevisionNumber);

            bool importResult = importer.Import(scene);

            if (importResult)
            {
                DisplayContent(scene);
            }
        }

        // Display content within the instance
        private static void DisplayContent(FBXScene sceneInstance)
        {
            FBXNode rootNode = sceneInstance.GetRootNode();
            if (rootNode != null)
            {
                // Iterate over the children in this node.
                for (int index = 0; index < rootNode.GetChildCount(); index++)
                {
                    var attributeType = rootNode.GetChild(index).GetNodeAttribute().GetAttributeType();

                    // Cast out the node object based on the type of the attribute.
                    switch (attributeType)
                    {
                        case AttributeType.eMesh:
                            DisplayMesh((FBXMesh)rootNode.GetChild(index).GetNodeAttribute());
                            break;
                        case AttributeType.eCamera:

                            break;

                        case AttributeType.eLight:

                            break;

                        case AttributeType.eSkeleton:
                            DisplaySkeleton((FBXSkeleton)rootNode.GetChild(index).GetNodeAttribute());
                            break;
                    }
                }
            }
        }

        private static void DisplayMesh(FBXMesh meshInstance)
        {
            if (meshInstance == null)
                throw new ArgumentNullException("The mesh instance was null. Check and try again!");
        }

        /// <summary>
        ///     Display the information regarding the skeleton
        /// </summary>
        /// <param name="skelInstance">The skeleton instance in question</param>
        private static void DisplaySkeleton(FBXSkeleton skelInstance)
        {
            if (skelInstance == null)
                throw new ArgumentNullException("The mesh instance was null. Check and try again!");
        }

        /// <summary>
        ///     Write out the log message
        /// </summary>
        /// <param name="message"></param>
        /// <param name="parameters"></param>
        private static void LogMessage(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message specified is either null or invalid.");

            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);
        }

        private static void LogError(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message specified is either null or invalid.");

            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);
        }

        private static void LogWarning(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message specified is either null or invalid.");

            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);

        }

        /// <summary>
        ///     Output the contents of the log message as well doing the relevant formatting to the 
        ///     console stdio so that it the coloring appears.
        /// </summary>
        /// <param name="type">The type of message</param>
        /// <param name="message">The message</param>
        private static void Output(LogType type, string message)
        {
            Console.ForegroundColor = ConsoleColor.White;

            Console.Write("[");
            switch (type)
            {
                default:
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

            Console.WriteLine(message);
        }

        public void Load(string fileName)
        {
            if (!string.IsNullOrEmpty(fileName))
            {
                Filename = fileName;
            }
        }
    }

    enum LogType 
    {
        Normal = 1,
        Warning,
        Error
    }
}
