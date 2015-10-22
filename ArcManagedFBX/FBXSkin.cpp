#include "Stdafx.h"
#include "FBXDeformer.h"
#include "FBXSkin.h"

using namespace ArcManagedFBX;

FBXSkin::FBXSkin()
{
}

FBXSkin::~FBXSkin()
{
}

FBXSkin::!FBXSkin()
{	
}

FBXSkin::FBXSkin(FbxSkin* instance) : FBXDeformer(instance)
{
}

void ArcManagedFBX::FBXSkin::AddControlPointIndex(int32 index, double blendWeight)
{
	GetFBXSkin()->AddControlPointIndex(index,blendWeight);
}

int32 ArcManagedFBX::FBXSkin::GetClusterCount()
{
	return GetFBXSkin()->GetClusterCount();
}

void ArcManagedFBX::FBXSkin::SetControlPointIWCount(int32 pCount)
{
	GetFBXSkin()->SetControlPointIWCount(pCount);
}

array<int32>^ ArcManagedFBX::FBXSkin::GetControlPointIndices()
{
	int32 count = GetControlPointIndicesCount();
	array<int32>^ indices = gcnew array<int32>(count);
	for(int32 index = 0; index < count; index++)
	{
		indices[index] = this->GetFBXSkin()->GetControlPointIndices()[index];
	}

	return indices;
}

int32 ArcManagedFBX::FBXSkin::GetControlPointIndicesCount()
{
	return this->GetFBXSkin()->GetControlPointIndicesCount();
}
