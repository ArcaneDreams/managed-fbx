#pragma once

#include "FBXColour.h"
#include "FBXObject.h"
#include "FBXTypes.h"

using namespace System;
using namespace System::Text;

using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	// The attribute that is responsible for generating the content.
	public ref class FBXAttribute : public FBXObject, public IDisposable
	{
	public:
		FBXAttribute();
		!FBXAttribute();
		virtual ~FBXAttribute();
		
		virtual AttributeType GetAttributeType();

		int32 GetNodeCount();

		ARC_PROPERTY_PUBLICGET(String^,ColourName);
		ARC_PROPERTY_PUBLICGET(FBXColour,Colour)

		ARC_CHILD_CAST(NativeObject,FbxNodeAttribute,FBXAttribute);
	protected:
		virtual void ConstructProperties(bool pForceSet);

	private:

	internal:
		FBXAttribute(FbxNodeAttribute* instance);

	};
}