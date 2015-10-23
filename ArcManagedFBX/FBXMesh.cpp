#include "Stdafx.h"
#include "FBXMesh.h"

using namespace ArcManagedFBX;

FBXMesh::FBXMesh()
{

}

FBXMesh::FBXMesh(FbxMesh* instance)
{
	this->m_Instance = instance;
}

FBXMesh::~FBXMesh()
{

}

FBXMesh::!FBXMesh()
{

}

void FBXMesh::Compact()
{
	this->GetFBXMesh()->Compact();
}

void FBXMesh::AddPolygon(int32 pIndex, int32 pTextureUVIndex)
{
	this->GetFBXMesh()->AddPolygon(pIndex,pTextureUVIndex);
}

int32 FBXMesh::GetPolygonCount()
{
	return this->GetFBXMesh()->GetPolygonCount();
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

bool ArcManagedFBX::FBXMesh::GetPolygonVertexNormal(int32 polygonIndex, int32 vertexIndex, FBXVector^ normal)
{
	return false;
	//return this->GetFBXMesh()->GetPolygonVertexNormal(polygonIndex,vertexIndex);
}

void ArcManagedFBX::FBXMesh::EndPolygon()
{
	this->GetFBXMesh()->EndPolygon();
}


void ArcManagedFBX::FBXMesh::BeginPolygon(int32 pMaterial, int32 pTexture, int32 pGroup, bool pLegacy)
{
	this->GetFBXMesh()->BeginPolygon(pMaterial,pTexture,pGroup,pLegacy);
}

array<int>^ ArcManagedFBX::FBXMesh::GetPolygonVertices()
{
	int32 vertexCount = this->GetFBXMesh()->GetPolygonVertexCount();

	array<int>^ vertexOutput = gcnew array<int>(vertexCount);

	int* vertices = this->GetFBXMesh()->GetPolygonVertices();

	if (vertices != nullptr)
	{
		for(int32 i = 0; i < vertexCount; i++)
		{
			vertexOutput[i] = vertices[i];
		}
	}

	return vertexOutput;
}

bool ArcManagedFBX::FBXMesh::GetPolygonVertexUVs(String^ uvSetName, array<FBXVector>^ uvs, array<int>^ unMappedUVId)
{
	return false;
}

bool ArcManagedFBX::FBXMesh::GetPolygonVertexUV(int32 polygonindex, int32 vertexindex, String^ uvSetName, FBXVector uv, bool^ unmapped)
{
	return false;
}

// This is going to require some work as we convert between an fbx array and a CLI array that is to be used for returning to the consumer.
bool ArcManagedFBX::FBXMesh::GetPolygonVertexNormals(array<FBXVector^>^ normals)
{	
	return false;
}


int ArcManagedFBX::FBXMesh::RemoveBadPolygons()
{
	return this->GetFBXMesh()->RemoveBadPolygons();
}

bool ArcManagedFBX::FBXMesh::GenerateNormals(bool overview, bool byCtrlPoint, bool cw)
{
	return this->GetFBXMesh()->GenerateNormals(overview,byCtrlPoint,cw);
}

void ArcManagedFBX::FBXMesh::Reset()
{
	return this->GetFBXMesh()->Reset();
}

int32 ArcManagedFBX::FBXMesh::GetUVLayercount()
{
	return this->GetFBXMesh()->GetUVLayerCount();
}

int ArcManagedFBX::FBXMesh::RemovePolygon(int32 polygonIndex)
{
	return this->GetFBXMesh()->RemovePolygon(polygonIndex);
}

ARC_INLINE void ArcManagedFBX::FBXMesh::ReservePolygonCount(int count)
{
	return this->GetFBXMesh()->ReservePolygonCount(count);
}

bool ArcManagedFBX::FBXMesh::IsTriangleMesh()
{
	return this->GetFBXMesh()->IsTriangleMesh();
}

bool ArcManagedFBX::FBXMesh::GenerateTangetsData(String^ uvSetName, bool overWrite)
{
	return false;
}

ARC_INLINE int32 ArcManagedFBX::FBXMesh::GetPolygonVertexCount()
{
	return this->GetFBXMesh()->GetPolygonVertexCount();
}

ARC_INLINE int32 ArcManagedFBX::FBXMesh::GetPolygonVertex(int32 polygonindex, int32 positionInPolygon)
{
	return this->GetFBXMesh()->GetPolygonVertex(polygonindex,positionInPolygon);
}

int32 ArcManagedFBX::FBXMesh::GetControlPointsCount()
{
	return this->GetFBXMesh()->GetControlPointsCount();
}

int32 ArcManagedFBX::FBXMesh::GetShapeCount()
{
	return GetFBXMesh()->GetShapeCount();
}

int32 ArcManagedFBX::FBXMesh::GetDeformerCount()
{
	return GetFBXMesh()->GetDeformerCount();
}

