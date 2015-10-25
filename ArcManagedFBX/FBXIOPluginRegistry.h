#ifndef FBXIOPluginRegistry_h__
#define FBXIOPluginRegistry_h__

namespace ArcManagedFBX
{ 
	namespace IO
	{
		public ref class FBXIOPluginRegistry
		{
			ARC_DEFAULT_CONSTRUCTORS(FBXIOPluginRegistry)
			
			ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXIOPluginRegistry,FbxIOPluginRegistry)

		
		private:
			FbxIOPluginRegistry* m_NativeInstance;
		};
	}
}
#endif // FBXIOPluginRegistry_h__