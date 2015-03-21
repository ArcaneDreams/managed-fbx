#include "Stdafx.h"
#include "FBXColour.h"
#include "FBXAttribute.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;

FBXAttribute::FBXAttribute()
{

}

FBXAttribute::FBXAttribute(FbxNodeAttribute* instance)
{
	this->m_NativeObject = instance;
}

FBXAttribute::~FBXAttribute()
{

}

FBXAttribute::!FBXAttribute()
{

}

//FBXColour FBXAttribute::PropColour::get()
//{
//	return FBXColour();
//}

AttributeType FBXAttribute::PropAttributeType::get()
{
	return (AttributeType)GetFBXAttribute()->GetAttributeType();
}
