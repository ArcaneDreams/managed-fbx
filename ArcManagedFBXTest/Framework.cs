using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.IO;

using ArcManagedFBXTest.Attributes;
using ArcManagedFBXTest.Utility;

using ArcManagedFBX;

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

        private ArgumentHandler m_Handler;

        private FBXScene m_Scene;

        #region Properties
        public FBXScene Scene
        {
            get { return m_Scene; }
            set { m_Scene = value; }
        }


        [CommandLineArgument("file",false)]
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

        public void Initialize(string[] args)
        {
            if (args != null && args.Any())
            {
                m_Handler.ParseArgs(args);
            }
        }

        public void Process()
        {
            m_Handler.InjectArguments(this);

            this.Load();
        }

        public void Load()
        {
            ArcManagedFBX.FBXManager managerInstance = ArcManagedFBX.FBXManager.Create();

            if (string.IsNullOrEmpty(Filename))
                throw new FileNotFoundException("The file that is being loaded in does not exist!");

            if (!File.Exists(Filename))
                throw new FileNotFoundException("The file that is being loaded was not found on disk.");

            m_Scene.Import(Filename);
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
