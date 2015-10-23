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
        /// <summary>
        ///     The scene that we are importing to view.
        /// </summary>
        public FBXScene Scene
        {
            get { return m_Scene; }
            set { m_Scene = value; }
        }

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

            FBXIOSettings settings = new FBXIOSettings();
        }

        public void Load(string fileName)
        {
            if (!string.IsNullOrEmpty(fileName))
            {
                Filename = fileName;
            }
        }
    }
}
