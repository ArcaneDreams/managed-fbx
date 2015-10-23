#pragma once

using namespace System;
using namespace System::Diagnostics;
using namespace System::Reflection;

namespace ArcManagedFBX
{
	namespace Framework
	{
		public ref class ArcFBXFramework
		{
		public:
			ArcFBXFramework();
			ArcFBXFramework(String^ fileName);
			~ArcFBXFramework();
			!ArcFBXFramework();

			void Initialize();
			void LoadFile(String^ fileName);
			
		private:
			String^ fileName;
			
			FbxManager* m_Manager;
			FbxIOSettings* m_IOSettings;
			FbxScene* m_Scene;
		internal:

		};
	}
}