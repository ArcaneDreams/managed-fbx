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

			void AddPropertyGroup(String^ name);

		private:


		internal:
			ARC_CHILD_CAST(NativeObject,FbxIOSettings,FBXIOSettings)
			ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXIOSettings,FbxIOSettings)
		};
	}
}