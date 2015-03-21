#include "Stdafx.h"
#include "FBXScene.h"
#include "FBXObject.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace System;

FBXObject::FBXObject()
{

}

FBXObject::~FBXObject()
{

}

int32 FBXObject::GetReferencedByCount()
{
	return this->m_NativeObject->GetReferencedByCount();
}

FBXObject^ FBXObject::GetReferencedBy(int32 index)
{
	return gcnew FBXObject(this->m_NativeObject->GetReferencedBy(index));
}

// The instantiation of the managed class that contains the 
// reference for the object instance.
FBXObject::FBXObject(FbxObject* objectInstance)
{
	this->m_NativeObject = objectInstance;
}

bool FBXObject::GetSelected()
{
	return false;
}

void FBXObject::Destroy(bool recursive)
{

}

void FBXObject::SetAllObjectFlags(uint32 flags)
{
	this->m_NativeObject->SetAllObjectFlags(flags);
}

uint32 FBXObject::GetAllObjectFlags()
{
	return this->m_NativeObject->GetAllObjectFlags();
}

const FBXManager^ FBXObject::GetManager()
{
	return nullptr;
}

const FBXScene^ FBXObject::GetScene()
{
	return gcnew FBXScene(this->m_NativeObject->GetScene());
}

const FBXDocument^ FBXObject::GetRootDocument()
{
	return nullptr;
}

const FBXDocument^ FBXObject::GetDocument()
{
	return nullptr;
}

void FBXObject::SetSelected(bool pSelected)
{
	
}

// Reset the properties of the native object.
void FBXObject::ResetProperties()
{
	this->m_NativeObject->ResetProperties();
}

const String^ FBXObject::GetName()
{
	String^ nameOutput = gcnew String(this->m_NativeObject->GetName());
	return nameOutput;
}

const String^ FBXObject::GetInitialName()
{
	String^ initialName = gcnew String("");

	return initialName;
}