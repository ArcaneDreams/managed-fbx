#pragma once

#include "FBXObject.h"
#include "FBXTypes.h"

using namespace System;
using namespace System::Text;

using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	public ref class FBXAttribute : public FBXObject, public IDisposable
	{
	public:
		FBXAttribute();
		!FBXAttribute();
		virtual ~FBXAttribute();
		
		ARC_PROPERTY_PUBLICGET(AttributeType,PropAttributeType)

	private:
		// The child cast that has to be done to get all the properties relating to the fbxattribute natively.
		ARC_CHILD_CAST(NativeObject,FbxNodeAttribute,FBXAttribute);

	internal:
		FBXAttribute(FbxNodeAttribute* instance);

	};
}