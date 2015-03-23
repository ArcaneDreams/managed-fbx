#pragma once

// The definition for the FBXIOFileHeaderInfo
namespace ArcManagedFBX
{
	namespace IO
	{
		public ref class FBXIOFileHeaderInfo
		{
		public:
			ARC_DEFAULT_CONSTRUCTORS(FBXIOFileHeaderInfo)

			virtual void Reset();

			// Properties for various parts of the object
			ARC_PROPERTY_PUBLICGET(int32, FileVersion)
			ARC_PROPERTY_PUBLICGET(bool, CreationTimeStampPresent)
			
		private:

		internal:
			FbxIOFileHeaderInfo* instance;
		};
	}
}