#pragma once

namespace ArcManagedFBX
{
	// The polygon representation for the polygon def struct
	public ref class FBXPolygonDef
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXPolygonDef)
		ARC_PROPERTY_PUBLICGET_PUBLICSET(int32,Index)
		ARC_PROPERTY_PUBLICGET_PUBLICSET(int32,Size)
		ARC_PROPERTY_PUBLICGET_PUBLICSET(int32,Group)

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXPolygonDef,FbxMesh::PolygonDef)
		FbxMesh::PolygonDef* m_Instance;
	};
}