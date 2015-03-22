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
	
	internal:
		FBXMesh(FbxMesh* instance);

	private:
		FbxNode* m_RootNode;
		FbxMesh* m_Instance;
	};
}