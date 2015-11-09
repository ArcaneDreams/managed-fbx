#include "Stdafx.h"
#include "FBXManager.h"
#include "FBXScene.h"
#include "FBXObject.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Types;
using namespace System;

FBXObject::FBXObject() : m_NativeObject(0)
{

}

FBXObject::FBXObject(FBXManager^ managerInstance, String^ objectName) : m_NativeObject(0)
{

}

FBXObject::~FBXObject()
{

}

FBXObject::!FBXObject()
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
FBXObject::FBXObject(FbxObject* objectInstance) : m_NativeObject(objectInstance)
{
}

bool FBXObject::GetSelected()
{
	return this->m_NativeObject->GetSelected();
}

// The call destroy on the object that we are working on
void FBXObject::Destroy(bool recursive)
{
	this->m_NativeObject->Destroy(recursive);
}

void FBXObject::SetAllObjectFlags(uint32 flags)
{
	this->m_NativeObject->SetAllObjectFlags(flags);
}

uint32 FBXObject::GetAllObjectFlags()
{
	return this->m_NativeObject->GetAllObjectFlags();
}

FBXManager^ FBXObject::GetManager()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr,"The native object that this FBXObject wraps is null. Check and try again.")

	if (m_ManagerInstance == nullptr)
		m_ManagerInstance = gcnew FBXManager(m_NativeObject->GetFbxManager());

	return m_ManagerInstance;
}

void FBXObject::SetName(String^ name)
{
	this->m_NativeObject->SetName(StringHelper::ToNative(name));
}

FBXScene^ FBXObject::GetScene()
{
	return gcnew FBXScene(this->m_NativeObject->GetScene());
}

FBXDocument^ FBXObject::GetRootDocument()
{
	return gcnew FBXDocument(this->m_NativeObject->GetRootDocument());
}

FBXDocument^ FBXObject::GetDocument()
{
	return gcnew FBXDocument(this->m_NativeObject->GetDocument());
}

void FBXObject::SetSelected(bool pSelected)
{
	this->m_NativeObject->SetSelected(pSelected);
}

FbxObject* FBXObject::GetFBXObject()
{
	return this->m_NativeObject;
}

const String^ FBXObject::GetNameOnly()
{
	return StringHelper::ToManaged(this->m_NativeObject->GetNameOnly().Buffer());
}

const String^ FBXObject::GetNameSpaceOnly()
{
	return StringHelper::ToManaged(this->m_NativeObject->GetNameSpaceOnly().Buffer());
}

const String^ FBXObject::GetNameSpacePrefix()
{
	return StringHelper::ToManaged(this->m_NativeObject->GetNameSpacePrefix().Buffer());
}

const uint64 FBXObject::GetUniqueID()
{
	return this->m_NativeObject->GetUniqueID();
}

bool FBXObject::IsConnectedSrcObject(FBXObject^ other)
{
	return this->m_NativeObject->IsConnectedSrcObject(other->GetFBXObject());
}

bool FBXObject::DisconnectSrcObject(FBXObject^ other)
{
	return this->m_NativeObject->DisconnectSrcObject(other->GetFBXObject());
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
	return StringHelper::ToManaged(this->m_NativeObject->GetInitialName());
}

// Forgive me father, for I have sinned...
generic<class ObjectType> where ObjectType : FBXObject, gcnew()
ObjectType ArcManagedFBX::FBXObject::GetSrcObject(int32 index)
{
	Type^ typeInstance = ObjectType::typeid;


	return gcnew ObjectType();
}
