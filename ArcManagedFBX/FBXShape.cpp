#include "Stdafx.h"
#include "FBXShape.h"

using namespace ArcManagedFBX;

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXShape)

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXShape,FBXGeometryBase,FbxShape)

void ArcManagedFBX::FBXShape::AddControlPointIndex(int32 index)
{

}

void ArcManagedFBX::FBXShape::SetControlPointIndicesCount(int32 count)
{

}

FBXGeometry^ ArcManagedFBX::FBXShape::GetBaseGeometry()
{
	return gcnew FBXGeometry();
}

int ArcManagedFBX::FBXShape::GetControlPointIndicesCount()
{
	ARC_CHECK_AND_THROW(this->GetFBXShape() == nullptr, "The FBX shape instance is null or invalid. Check and try again.");

	return this->GetFBXShape()->GetControlPointIndicesCount();
}

array<int>^ ArcManagedFBX::FBXShape::GetControlPointIndices()
{
	int32 count = this->GetControlPointIndicesCount();
	array<int>^ instance = gcnew array<int>(count);

	for(int32 index = 0; index < count; index++)
	{
		
	}

	return instance;
}

void ArcManagedFBX::FBXShape::Reset()
{

}
