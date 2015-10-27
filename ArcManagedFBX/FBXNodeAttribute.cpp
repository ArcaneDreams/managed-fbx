#include "Stdafx.h"
#include "FBXColour.h"
#include "FBXNodeAttribute.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Utility;

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXNodeAttribute)

FBXNodeAttribute::FBXNodeAttribute(FbxNodeAttribute* instance) : FBXObject(instance)
{
}

// Generate the colour name property that is to be used.
String^ ArcManagedFBX::FBXNodeAttribute::ColourName::get()
{
	String^ colourName = StringHelper::ToManaged(this->GetFBXNodeAttribute()->sColor);
	return colourName;
}

FBXColour ArcManagedFBX::FBXNodeAttribute::Colour::get()
{
	float64 r,g,b;

	r = GetFBXNodeAttribute()->Color.Get().mData[0];
	g = GetFBXNodeAttribute()->Color.Get().mData[1];
	b = GetFBXNodeAttribute()->Color.Get().mData[2];

	// Return the fbx colour object as it is wrapped.
	return FBXColour(r,g,b,1.f);
}

int ArcManagedFBX::FBXNodeAttribute::GetNodeCount()
{
	ARC_CHECK_AND_THROW(this->GetFBXNodeAttribute() == nullptr,"The node attribute native instance is invalid. Check and try again.")

	return this->GetFBXNodeAttribute()->GetNodeCount();
}

// Retrieve the type of the attribute from the object
ArcManagedFBX::Types::EAttributeType ArcManagedFBX::FBXNodeAttribute::GetAttributeType()
{
	ARC_CHECK_AND_THROW(this->GetFBXNodeAttribute() == nullptr,"The node attribute native instance is invalid. Check and try again.")

	return (EAttributeType)this->GetFBXNodeAttribute()->GetAttributeType();
}

void ArcManagedFBX::FBXNodeAttribute::ConstructProperties(bool pForceSet)
{

}

