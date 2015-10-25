#include "Stdafx.h"
#include "FBXColour.h"
#include "FBXAttribute.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Utility;

FBXAttribute::FBXAttribute() : FBXObject()
{

}

FBXAttribute::FBXAttribute(FbxNodeAttribute* instance) : FBXObject(instance)
{
}

FBXAttribute::~FBXAttribute()
{

}

FBXAttribute::!FBXAttribute()
{

}

// Generate the colour name property that is to be used.
String^ ArcManagedFBX::FBXAttribute::ColourName::get()
{
	String^ colourName = StringHelper::ToManaged(this->GetFBXAttribute()->sColor);
	return colourName;
}

FBXColour ArcManagedFBX::FBXAttribute::Colour::get()
{
	float64 r,g,b;

	r = GetFBXAttribute()->Color.Get().mData[0];
	g = GetFBXAttribute()->Color.Get().mData[1];
	b = GetFBXAttribute()->Color.Get().mData[2];

	// Return the fbx colour object as it is wrapped.
	return FBXColour(r,g,b,1.f);
}

int ArcManagedFBX::FBXAttribute::GetNodeCount()
{
	ARC_CHECK_AND_THROW(this->GetFBXAttribute() == nullptr,"The node attribute native instance is invalid. Check and try again.")

	return this->GetFBXAttribute()->GetNodeCount();
}

// Retrieve the type of the attribute from the object
ArcManagedFBX::Types::AttributeType ArcManagedFBX::FBXAttribute::GetAttributeType()
{
	ARC_CHECK_AND_THROW(this->GetFBXAttribute() == nullptr,"The node attribute native instance is invalid. Check and try again.")

	return (AttributeType)this->GetFBXAttribute()->GetAttributeType();
}

void ArcManagedFBX::FBXAttribute::ConstructProperties(bool pForceSet)
{

}

