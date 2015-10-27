#pragma once

#include "FBXStatus.h"
#include "FBXNodeAttribute.h"
#include "FBXVector.h"
#include "FBXObject.h"
#include "FBXMesh.h"
#include "FBXManager.h"

using namespace System::Runtime::InteropServices;

namespace ArcManagedFBX
{
	// The representation of a node within the FBX library
	public ref class FBXNode : public FBXObject
	{
	public:
		FBXNode();
		FBXNode(FBXNode^ other);
		virtual ~FBXNode();
		!FBXNode();
		
		// Get only properties that are to be used for getting the position and rotation
		ARC_PROPERTY_PUBLICGET(FBXVector^,Position);
		ARC_PROPERTY_PUBLICGET(FBXVector^,Rotation);
		ARC_PROPERTY_PUBLICGET(FBXVector^,Scale);

		// Add a child node to this node.
		void AddChild(FBXNode^ Node);

		void RemoveChild(FBXNode^ Node);

		int32 GetChildCount([Optional] bool recursive);

		FBXNode^ GetChild(int32 pIndex);

		FBXNode^ FindChild(String^ name, bool recursive, bool initial);

		void SetTarget(FBXNode^ node);

		FBXNode^ GetTarget();

		void SetPostTargetRotation(FBXVector vector);

		FBXVector GetPostTargetRotation();

		void SetTargetUp(FBXNode^ pNode);

		FBXNode^ GetTargetUp();

		void SetTargetUpVector(FBXVector vector);

		FBXVector GetTargetUpVector();

		void SetVisibility(bool isVisible);

		bool GetVisibility();

		void SetShadingMode(EShadingMode mode);

		EShadingMode GetShadingMode();

		FBXNodeAttribute^ SetNodeAttribute(FBXNodeAttribute^ attribute);

		FBXNodeAttribute^ GetNodeAttribute();

		// The attribute count
		int32 GetNodeAttributeCount();
		int32 GetDefaultNodeAttributeIndex();

		// The attribute index.
		bool SetDefaultNodeAttributeIndex(int32 index, FBXStatus^ status);

	internal:
		ARC_CHILD_CAST(NativeObject,FbxNode,FBXNode)
		FBXNode(FbxNode* instance);

	private:
	};
}