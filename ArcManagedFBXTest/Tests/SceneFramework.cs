using ArcManagedFBX;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArcManagedFBXTest.Tests
{
    public class SceneFramework
    {
        private FBXScene m_SceneInstance = null;

        private SceneFramework()
        {

        }

        public SceneFramework(FBXScene sceneInstance)
        {
            m_SceneInstance = sceneInstance;
        }

        public void Operation()
        {
            if (m_SceneInstance == null)
                throw new ArgumentNullException("The scene instance is invalid or has not been set. Check and try again.");

        }
    }
}
