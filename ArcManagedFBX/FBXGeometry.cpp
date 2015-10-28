#include "Stdafx.h"
#include "FBXGeometry.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Exceptions;
using namespace ArcManagedFBX::Utility;

FBXGeometry::FBXGeometry() : FBXGeometryBase()
{

}

FBXGeometry::!FBXGeometry()
{

}

FBXGeometry::~FBXGeometry()
{

}

FBXGeometry::FBXGeometry(FbxGeometry* instance) : FBXGeometryBase(instance)
{

}

ArcManagedFBX::Types::EAttributeType ArcManagedFBX::FBXGeometry::GetAttributeType()
{
	return (EAttributeType)this->GetFBXGeometry()->GetAttributeType();
}

int32 ArcManagedFBX::FBXGeometry::GetShapeCount(int32 blendShapeIndex, int32 blendShapeChannelIndex, FBXStatus^ status)
{
	return this->GetFBXGeometry()->GetShapeCount(blendShapeIndex,blendShapeChannelIndex,status->GetInstance());
}

int32 ArcManagedFBX::FBXGeometry::GetShapeCount()
{
	return this->GetFBXGeometry()->GetShapeCount();
}

void ArcManagedFBX::FBXGeometry::ClearShape()
{
	this->GetFBXGeometry()->ClearShape();
}

int32 ArcManagedFBX::FBXGeometry::GetDestinationGeometryWeightedMapCount()
{
	return this->GetFBXGeometry()->GetDestinationGeometryWeightedMapCount();
}

int32 ArcManagedFBX::FBXGeometry::GetDeformerCount(EDeformerType type)
{
	return this->GetFBXGeometry()->GetDeformerCount((FbxDeformer::EDeformerType)type);
}

int32 ArcManagedFBX::FBXGeometry::GetDeformerCount()
{
	return this->GetFBXGeometry()->GetDeformerCount();
}

FBXDeformer^ ArcManagedFBX::FBXGeometry::RemoveDeformer(int32 index, FBXStatus^ status)
{
	return gcnew FBXDeformer(this->GetFBXGeometry()->RemoveDeformer(index,status->GetInstance()));
}

void ArcManagedFBX::FBXGeometry::ApplyPivot()
{
	this->GetFBXGeometry()->ApplyPivot();
}

int32 ArcManagedFBX::FBXGeometry::AddDeformer(FBXDeformer^ deformer)
{
	return this->GetFBXGeometry()->AddDeformer(deformer->GetFBXDeformer());
}
