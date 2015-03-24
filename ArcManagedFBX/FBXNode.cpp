#include "Stdafx.h"
#include "FBXNode.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Utility;

using namespace System;
using namespace System::Text;


// Constructor related bollocks.
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
	this->m_NativeObject = instance;
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
	this->GetFBXNode()->AddChild(node->GetFBXNode());
}

int32 ArcManagedFBX::FBXNode::GetDefaultNodeAttributeIndex()
{
	return this->GetFBXNode()->GetDefaultNodeAttributeIndex();
}

int32 ArcManagedFBX::FBXNode::GetNodeAttributeCount()
{
	return this->GetNodeAttributeCount();
}

FBXAttribute^ ArcManagedFBX::FBXNode::GetNodeAttribute()
{
	return gcnew FBXAttribute(this->GetFBXNode()->GetNodeAttribute());
}

FBXAttribute^ ArcManagedFBX::FBXNode::SetNodeAttribute(FBXAttribute^ attribute)
{
	return gcnew FBXAttribute(this->GetFBXNode()->SetNodeAttribute(attribute->GetFBXAttribute()));
}

ArcManagedFBX::Types::ShadingMode ArcManagedFBX::FBXNode::GetShadingMode()
{
	return (ShadingMode)this->GetFBXNode()->GetShadingMode();
}

void ArcManagedFBX::FBXNode::SetShadingMode(ShadingMode mode)
{
	this->GetFBXNode()->SetShadingMode((FbxNode::EShadingMode)mode);
}

bool ArcManagedFBX::FBXNode::GetVisibility()
{
	return this->GetFBXNode()->GetVisibility();
}

void ArcManagedFBX::FBXNode::SetVisibility(bool isVisible)
{
	this->GetFBXNode()->SetVisibility(isVisible);
}

ArcManagedFBX::FBXVector ArcManagedFBX::FBXNode::GetTargetUpVector()
{
	return FBXVector(this->GetFBXNode()->GetTargetUpVector());
}

void ArcManagedFBX::FBXNode::SetTargetUpVector(FBXVector vector)
{

}

FBXNode^ ArcManagedFBX::FBXNode::GetTargetUp()
{
	return gcnew FBXNode(this->GetFBXNode()->GetTargetUp());
}

void ArcManagedFBX::FBXNode::SetTargetUp(FBXNode^ pNode)
{

}

ArcManagedFBX::FBXVector ArcManagedFBX::FBXNode::GetPostTargetRotation()
{
	return FBXVector(this->GetFBXNode()->GetPostTargetRotation());
}

void ArcManagedFBX::FBXNode::SetPostTargetRotation(FBXVector vector)
{
	
}

FBXNode^ ArcManagedFBX::FBXNode::GetTarget()
{
	return gcnew FBXNode(this->GetFBXNode()->GetTarget());
}

void ArcManagedFBX::FBXNode::SetTarget(FBXNode^ node)
{
	this->GetFBXNode()->SetTarget(node->GetFBXNode());
}

FBXNode^ ArcManagedFBX::FBXNode::FindChild(String^ name, bool recursive, bool initial)
{
	const char* nameNative = StringHelper::ToNative(name);
	return gcnew FBXNode(this->GetFBXNode()->FindChild(nameNative,recursive,initial));
}

FBXNode^ ArcManagedFBX::FBXNode::GetChild(int32 pIndex)
{
	return gcnew FBXNode(this->GetFBXNode()->GetChild(pIndex));
}

void ArcManagedFBX::FBXNode::RemoveChild(FBXNode^ Node)
{
	this->GetFBXNode()->RemoveChild(Node->GetFBXNode());
}

bool ArcManagedFBX::FBXNode::SetDefaultNodeAttributeIndex(int32 index, FBXStatus^ status)
{
	return this->GetFBXNode()->SetDefaultNodeAttributeIndex(index,status->GetInstance());
}
