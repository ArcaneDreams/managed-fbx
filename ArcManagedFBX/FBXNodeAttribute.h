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
	public ref class FBXNodeAttribute : public FBXObject, public IDisposable
	{
	public:
		FBXNodeAttribute();
		!FBXNodeAttribute();
		virtual ~FBXNodeAttribute();
		
		virtual AttributeType GetAttributeType();

		int32 GetNodeCount();

		ARC_PROPERTY_PUBLICGET(String^,ColourName);
		ARC_PROPERTY_PUBLICGET(FBXColour,Colour)

		ARC_CHILD_CAST(NativeObject,FbxNodeAttribute,FBXNodeAttribute);
	protected:
		virtual void ConstructProperties(bool pForceSet);

	private:

	internal:
		FBXNodeAttribute(FbxNodeAttribute* instance);

	};
}