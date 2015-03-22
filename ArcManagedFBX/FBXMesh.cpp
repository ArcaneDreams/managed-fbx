#include "Stdafx.h"
#include "FBXMesh.h"

using namespace ArcManagedFBX;

FBXMesh::FBXMesh()
{

}

FBXMesh::FBXMesh(FbxMesh* instance)
{

}

FBXMesh::~FBXMesh()
{

}

FBXMesh::!FBXMesh()
{

}

void FBXMesh::BeginPolygonExt(int32 pMaterial, IntPtr pTextures)
{

}

void FBXMesh::AddPolygon(int32 pIndex, int32 pTextureUVIndex)
{

}

int32 FBXMesh::GetPolygonCount()
{
	return 0;
}

ARC_INLINE int32 ArcManagedFBX::FBXMesh::GetPolygonSize(int32 polygonIndex)
{
	return this->GetFBXMesh()->GetPolygonSize(polygonIndex);
}

ARC_INLINE int32 ArcManagedFBX::FBXMesh::GetPolygonGroup(int32 polygonIndex)
{
	return this->GetFBXMesh()->GetPolygonGroup(polygonIndex);
}

ARC_INLINE void ArcManagedFBX::FBXMesh::SetPolygonGroup(int32 polygonIndex,int32 group)
{
	this->GetFBXMesh()->SetPolygonGroup(polygonIndex,group);
}

bool ArcManagedFBX::FBXMesh::GetPolygonVertexNormal(int32 polygonIndex, int32 vertexIndex)
{
	return false;
}

void ArcManagedFBX::FBXMesh::EndPolygon()
{

}

