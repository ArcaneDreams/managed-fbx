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
    /// <summary>
    ///     Basic framework to be used for testing the library.
    /// </summary>
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

            LogMessage("Instantiating the FBX Manager...");
            FBXManager managerInstance = ArcManagedFBX.FBXManager.Create();

            if (string.IsNullOrEmpty(Filename))
                throw new FileNotFoundException("The file that is being loaded in does not exist!");

            if (!File.Exists(Filename))
                throw new FileNotFoundException("The file that is being loaded was not found on disk.");

            LogMessage("Instantiating the FBX Settings...");
            FBXIOSettings settings = FBXIOSettings.Create(managerInstance, "IOSRoot");
            
            managerInstance.SetIOSettings(settings);

            LogMessage("Loading plugins directory...");
            managerInstance.LoadPluginsDirectory(Environment.CurrentDirectory, "");

            int fileMajorNumber = 0, fileMinorNumber = 0, fileRevisionNumber = 0;

            LogMessage("Instantiating the Scene...");

            // Generate the scene that is to be used
            FBXScene scene = FBXScene.Create(managerInstance, "My Scene");

            // Load in the importer that we are to use
            FBXImporter importer = FBXImporter.Create(managerInstance, "");

            LogMessage("Load the importer for the file '{0}'",Filename);
            bool initializeResult = importer.Initialize(Filename, -1, managerInstance.GetIOSettings());
            FBXManager.GetFileFormatVersion(ref fileMajorNumber,ref fileMinorNumber,ref fileRevisionNumber);

            bool importResult = importer.Import(scene);

            if (importResult)
                DisplayContent(scene);
            else
                LogError("Import failed. Nothing to do!");
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

                    FBXNode nodeInstance = rootNode.GetChild(index);

                    // Cast out the node object based on the type of the attribute.
                    switch (attributeType)
                    {
                        case EAttributeType.eMesh:
                            DisplayMesh(nodeInstance.GetNodeAttribute());
                            break;

                        case EAttributeType.eCamera:
                            DisplayCamera((FBXCamera)nodeInstance.GetNodeAttribute());
                            break;

                        case EAttributeType.eLight:
                            DisplayLight((FBXLight)nodeInstance.GetNodeAttribute());
                            break;

                        case EAttributeType.eSkeleton:
                            DisplaySkeleton(nodeInstance.GetNodeAttribute());
                            break;
                    }
                }
            }
        }

        /// <summary>
        ///     Display information regarding lights.
        /// </summary>
        /// <param name="lightInstance">The instance of the light that we are working with</param>
        private static void DisplayLight(FBXLight lightInstance)
        {
            if (lightInstance == null)
                throw new ArgumentNullException("The light instance is null. Check and try again.");
        }

        /// <summary>
        ///     Display information regarding the camera
        /// </summary>
        /// <param name="cameraInstance">The camera instance</param>
        private static void DisplayCamera(FBXCamera cameraInstance)
        {
            if (cameraInstance == null)
                throw new ArgumentNullException("Camera instance was null. Check and try again");
        }

        private static void DisplayPolygons(FBXMesh meshInstance)
        {
            if (meshInstance == null)
                throw new ArgumentNullException("The mesh instance is null. Check and try again.");

            FBXVector[] controlPoints = meshInstance.GetControlPoints();
        }

        /// <summary>
        ///     Display the control points for the mesh
        /// </summary>
        /// <param name="meshInstance">Output information regarding the control points</param>
        private static void DisplayControlPoints(FBXMesh meshInstance)
        {
            if (meshInstance == null)
                throw new ArgumentNullException("The mesh instance is null. Check and try again.");


        }

        /// <summary>
        ///     Output the contents of the mesh
        /// </summary>
        /// <param name="meshInstance">The instance for the mesh that we are retrieving the control points from</param>
        private static void DisplayMesh(FBXMesh meshInstance)
        {
            if (meshInstance == null)
                throw new ArgumentNullException("The mesh instance was null. Check and try again!");

            FBXVector[] controlPoints = meshInstance.GetControlPoints();
        }

        /// <summary>
        ///     Display the information regarding the skeleton
        /// </summary>
        /// <param name="skelInstance">The skeleton instance in question</param>
        private static void DisplaySkeleton(FBXSkeleton skelInstance)
        {
            if (skelInstance == null)
                throw new ArgumentNullException("The mesh instance was null. Check and try again!");

            string[] skeletonTypes = new string[] { "Root", "Limb", "Limb Node", "Effector" };

            LogMessage("Type: {0}",skeletonTypes[(int)skelInstance.GetSkeletonType()]);

            // Based on the type of skeleton it is, display the relevant information
            switch (skelInstance.GetSkeletonType())
            {
                case ESkeletonType.eEffector:
                        
                    break;

                case ESkeletonType.eLimb:
                        
                    break;

                case ESkeletonType.eRoot:
                        
                    break;

                case ESkeletonType.eLimbNode:

                    break;
            }
        }

        /// <summary>
        ///     Write out the log message
        /// </summary>
        /// <param name="message">The message that we are writing out</param>
        /// <param name="parameters">The parameters that we are formatting the string with</param>
        private static void LogMessage(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message specified is either null or invalid.");

            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);

            Output(LogType.Normal, message);
        }

        /// <summary>
        ///     Write out the log message
        /// </summary>
        /// <param name="message">The message that we are writing out</param>
        /// <param name="parameters">The parameters that we are formatting the string with</param>
        private static void LogError(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message specified is either null or invalid.");

            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);

            Output(LogType.Error, message);
        }

        /// <summary>
        ///     Write out the log message
        /// </summary>
        /// <param name="message">The message that we are writing out</param>
        /// <param name="parameters">The parameters that we are formatting the string with</param>
        private static void LogWarning(string message, params object[] parameters)
        {
            if (string.IsNullOrEmpty(message))
                throw new ArgumentNullException("The message specified is either null or invalid.");

            if (parameters != null && parameters.Any())
                message = string.Format(message, parameters);

            Output(LogType.Warning, message);
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
