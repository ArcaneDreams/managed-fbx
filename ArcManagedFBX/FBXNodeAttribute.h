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
		ARC_DEFAULT_CONSTRUCTORS(FBXNodeAttribute)

		virtual EAttributeType GetAttributeType();

		int32 GetNodeCount();

		ARC_PROPERTY_PUBLICGET(String^,ColourName);
		ARC_PROPERTY_PUBLICGET(FBXColour,Colour)

		ARC_CHILD_CAST(NativeObject,FbxNodeAttribute,FBXNodeAttribute);


	protected:

		virtual void ConstructProperties(bool pForceSet);

		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXNodeAttribute,FbxNodeAttribute)

	internal:
		generic<typename NewType> where NewType : FBXNodeAttribute, gcnew()
		static NewType CreateNodeAttribute(FbxNodeAttribute* nativeInstance)
		{
			NewType instanceToReturn = gcnew NewType;
			((FBXNodeAttribute^)instanceToReturn)->SetInstance(nativeInstance);

			return instanceToReturn;

		}

	};
}