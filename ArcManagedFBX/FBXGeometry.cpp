#include "Stdafx.h"
#include "FBXGeometry.h"

using namespace ArcManagedFBX;

FBXGeometry::FBXGeometry()
{

}

FBXGeometry::!FBXGeometry()
{

}

FBXGeometry::~FBXGeometry()
{

}

FBXGeometry::FBXGeometry(FbxGeometry* instance)
{
	this->m_NativeObject = instance;
}

ArcManagedFBX::Types::AttributeType ArcManagedFBX::FBXGeometry::GetAttributeType()
{
	return (AttributeType)this->GetFBXGeometry()->GetAttributeType();
}
