#pragma once

// The mesh implementation from FBX
namespace ArcManagedFBX
{
	// The mesh fbx mesh representation
	public ref class FBXMesh
	{
	public:
		FBXMesh();
		~FBXMesh();
	internal:
		FBXMesh(FbxMesh* instance);

	private:
		FbxNode* m_RootNode;
	};
}