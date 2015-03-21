using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.IO;

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

        public string Filename
        {
            get;
            set;
        }


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

        public void Load()
        {
            if (string.IsNullOrEmpty(Filename))
                throw new FileNotFoundException("The file that is being loaded in does not exist!");
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
