#pragma once

using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	namespace IO
	{
		public ref class FBXFile
		{
		public:
			ARC_DEFAULT_CONSTRUCTORS(FBXFile)

			virtual bool Open(String^ pFilename, FileMode mode, bool binary);
			virtual bool Close();
			virtual void Seek(const int64 offset, const FileSeekPos pos);
		private:
			
		};
	}
}