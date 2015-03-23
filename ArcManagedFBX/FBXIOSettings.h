#pragma once
#include "FBXObject.h"

using namespace System;
using namespace System::Text;

using namespace ArcManagedFBX;

namespace ArcManagedFBX
{
	namespace IO
	{
		public ref class FBXIOSettings : public FBXObject
		{
		public:
			ARC_DEFAULT_CONSTRUCTORS(FBXIOSettings)

				// For adding a new property group
			void AddPropertyGroup(String^ name);

			ARC_CHILD_CAST(NativeObject,FbxIOSettings,FBXIOSettings)
		private:

		internal:
			ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXIOSettings,FbxIOSettings)
		};
	}
}