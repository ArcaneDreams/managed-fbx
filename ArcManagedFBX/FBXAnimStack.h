#pragma once
#include "FBXCollection.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	namespace Layers
	{
		public ref class FBXAnimStack : public FBXCollection
		{
		public:
			ARC_DEFAULT_CONSTRUCTORS(FBXAnimStack)
		
		private:
			ARC_CHILD_CAST(NativeObject,FbxAnimStack,FBXAnimStack)

		internal:
			ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXAnimStack,FbxAnimStack)
		};
	}
}