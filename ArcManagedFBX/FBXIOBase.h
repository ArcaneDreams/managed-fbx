#pragma once

#include "FBXObject.h"

using namespace ArcManagedFBX;

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	namespace IO
	{
		// The IO base of the FBX SDK library
		public ref class FBXIOBase : public FBXObject
		{
		public:
			FBXIOBase();
			~FBXIOBase();
			!FBXIOBase();

			virtual String^ GetFilename();
		protected:
			String^ m_Filename;

		private:
			ARC_CHILD_CAST(NativeObject,FbxIOBase,FBXIOBase)

		internal:
			FBXIOBase(FbxIOBase* instance);
		};
	}
}