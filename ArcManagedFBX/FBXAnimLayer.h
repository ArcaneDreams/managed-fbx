#pragma once
#include "FBXCollection.h"

using namespace System::Text;
using namespace System;

namespace ArcManagedFBX
{
	namespace Layers
	{
		public ref class FBXAnimLayer : public FBXCollection
		{
		public:
			FBXAnimLayer();
			virtual ~FBXAnimLayer();
			!FBXAnimLayer();
		internal:

		private:
			ARC_CHILD_CAST(NativeObject,FbxAnimLayer,FBXAnimLayer);
		};
	}
}