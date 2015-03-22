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
		
		void BeginPolygonExt(int32 pMaterial, IntPtr pTextures);
		void AddPolygon(int32 pIndex, int32 pTextureUVIndex);
		void EndPolygon();

		ARC_INLINE int32 GetPolygonCount();
		
		ARC_INLINE int32 GetPolygonSize(int32 polygonIndex);
		ARC_INLINE int32 GetPolygonGroup(int32 polygonIndex);
		ARC_INLINE void SetPolygonGroup(int32 polygonIndex,int32 group);

		bool GetPolygonVertexNormal(int32 polygonIndex, int32 vertexIndex);


	internal:
		FBXMesh(FbxMesh* instance);

	private:
		ARC_CHILD_CAST(NativeObject,FbxMesh,FBXMesh)
		FbxNode* m_RootNode;
		FbxMesh* m_Instance;
	};
}