#pragma once

#include "FBXAttribute.h"
#include "FBXVector.h"
#include "FBXMesh.h"
#include "FBXManager.h"

namespace ArcManagedFBX
{
	// The representation of a node within the FBX library
	public ref class FBXNode
	{
	public:
		FBXNode();
		FBXNode(FBXNode^ other);
		virtual ~FBXNode();
		!FBXNode();
		ARC_PROPERTY_PUBLICGET_PUBLICSET(int32,NodeCount);
		ARC_PROPERTY_PUBLICGET_PUBLICSET(String^,Name);

		// Get only properties that are to be used for getting the position and rotation
		ARC_PROPERTY_PUBLICGET(FBXVector^,Position);
		ARC_PROPERTY_PUBLICGET(FBXVector^,Rotation);
		ARC_PROPERTY_PUBLICGET(FBXVector^,Scale);

		// Add a child node to this node.
		void AddChild(FBXNode^ Node);

	internal:
		FBXNode(FbxNode* instance);

	private:
		int32 m_NodeCount;

		array<FBXNode^>^ m_Children;
		array<FBXAttribute^>^ m_Attributes;

		FbxNode* m_Node;

		FBXVector^	mRotationOffset;
		FBXVector^	mRotationPivot;
		FBXVector^	mPreRotation;
		FBXVector^	mPostRotation;
		FBXVector^	mScalingOffset;
		FBXVector^	mScalingPivot;
		FBXVector^	mGeometricTranslation;
		FBXVector^	mGeometricRotation;
		FBXVector^	mGeometricScaling;
	};
}