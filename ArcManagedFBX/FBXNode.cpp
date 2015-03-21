#include "Stdafx.h"
#include "FBXNode.h"

using namespace ArcManagedFBX;

using namespace System;
using namespace System::Text;

ARC_IMPL_PROPERTY_GET(int32,FBXNode,NodeCount)
ARC_IMPL_PROPERTY_SET(int32,FBXNode,NodeCount)

FBXNode::FBXNode()
{

}

FBXNode::~FBXNode()
{

}

FBXNode::!FBXNode()
{

}

FBXNode::FBXNode(FBXNode^ other)
{

}

FBXNode::FBXNode(FbxNode* instance)
{
	this->m_Node = instance;
}

String^ FBXNode::Name::get()
{
	return gcnew String(this->m_Node->GetName());
}

void FBXNode::Name::set(String^ value)
{

}

FBXVector^ FBXNode::Position::get()
{
	return nullptr;
}

FBXVector^ FBXNode::Scale::get()
{
	return nullptr;
}

FBXVector^ FBXNode::Rotation::get()
{
	return nullptr;
}

void FBXNode::AddChild(FBXNode^ node)
{

}