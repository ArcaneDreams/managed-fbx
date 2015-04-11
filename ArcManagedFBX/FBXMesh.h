#pragma once

#include "FBXGeometry.h"

// The mesh implementation from FBX
namespace ArcManagedFBX
{
	// The mesh fbx mesh representation
	public ref class FBXMesh : public FBXGeometry
	{
	public:
		FBXMesh();
		virtual ~FBXMesh();
		!FBXMesh();
		
		void BeginPolygon(int32 pMaterial, int32 pTexture, int32 pGroup, bool pLegacy);

		void AddPolygon(int32 pIndex, int32 pTextureUVIndex);
		
		void EndPolygon();

		bool IsTriangleMesh();

		virtual void Compact();

		ARC_INLINE void ReservePolygonCount(int count);

		ARC_INLINE int32 GetPolygonCount();

		ARC_INLINE int32 GetPolygonVertex(int32 polygonindex, int32 positionInPolygon);

		ARC_INLINE int32 GetPolygonSize(int32 polygonIndex);

		ARC_INLINE int32 GetPolygonGroup(int32 polygonIndex);

		ARC_INLINE void SetPolygonGroup(int32 polygonIndex,int32 group);

		ARC_INLINE int32 GetPolygonVertexCount();

		bool GetPolygonVertexNormal(int32 polygonIndex, int32 vertexIndex, FBXVector^ normal);

		bool GetPolygonVertexNormals(array<FBXVector^>^ normals);

		bool GetPolygonVertexUV(int32 polygonindex, int32 vertexindex, String^ uvSetName, FBXVector uv, bool^ unmapped);



		bool GetPolygonVertexUVs(String^ uvSetName, array<FBXVector>^ uvs, array<int>^ unMappedUVId);

		bool GenerateTangetsData(String^ uvSetName, bool overWrite);

		array<int>^ GetPolygonVertices();

		int RemovePolygon(int32 polygonIndex);

		int32 GetUVLayercount();

		void Reset();

		bool GenerateNormals(bool overview, bool byCtrlPoint, bool cw);

		int RemoveBadPolygons();

	internal:
		FBXMesh(FbxMesh* instance);

	private:
		ARC_CHILD_CAST(NativeObject,FbxMesh,FBXMesh)
		FbxNode* m_RootNode;
		FbxMesh* m_Instance;
	};
}