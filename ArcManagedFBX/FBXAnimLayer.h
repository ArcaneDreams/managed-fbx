#pragma once
#include "FBXTypes.h"
#include "FBXColour.h"
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

			ARC_PROPERTY_PUBLICGET(float64, Weight);
			ARC_PROPERTY_PUBLICGET(bool,Mute);
			ARC_PROPERTY_PUBLICGET(bool,Solo);
			ARC_PROPERTY_PUBLICGET(bool,Lock);
			ARC_PROPERTY_PUBLICGET(FBXColour,Color);

			void Reset();
		internal:
			FBXAnimLayer(FbxAnimLayer* instance);
		private:
			ARC_CHILD_CAST(NativeObject,FbxAnimLayer,FBXAnimLayer);
		};
	}
}