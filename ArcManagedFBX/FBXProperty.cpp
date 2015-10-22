#include "Stdafx.h"
#include "FBXObject.h"
#include "FBXProperty.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;

FBXProperty::FBXProperty() : m_NativeInstance(0)
{

}

FBXProperty::!FBXProperty()
{

}

FBXProperty::~FBXProperty()
{

}

FBXProperty::FBXProperty(FbxProperty* instance) : m_NativeInstance(instance)
{
	
}

void ArcManagedFBX::FBXProperty::Destroy()
{
	m_NativeInstance->Destroy();
}

void ArcManagedFBX::FBXProperty::DestroyRecursively()
{
	m_NativeInstance->DestroyRecursively();
}

void ArcManagedFBX::FBXProperty::DestroyChildren()
{
	m_NativeInstance->DestroyChildren();
}

String^ ArcManagedFBX::FBXProperty::GetName()
{
	return StringHelper::ToManaged(m_NativeInstance->GetName());
}

String^ ArcManagedFBX::FBXProperty::GetHierarchicalName()
{
	return StringHelper::ToManaged(m_NativeInstance->GetHierarchicalName());
}

void ArcManagedFBX::FBXProperty::SetUserTag(int pTag)
{
	m_NativeInstance->SetUserTag(pTag);
}

int ArcManagedFBX::FBXProperty::GetUserTag()
{
	return m_NativeInstance->GetUserTag();
}

void* ArcManagedFBX::FBXProperty::GetUserDataPtr()
{
	return m_NativeInstance->GetUserDataPtr();
}

void ArcManagedFBX::FBXProperty::SetUserDataPtr(void* pUserData)
{
	m_NativeInstance->SetUserDataPtr(pUserData);
}

void ArcManagedFBX::FBXProperty::SetLabel(String^ pLabel)
{
	m_NativeInstance->SetLabel(StringHelper::ToNative(pLabel));
}

String^ ArcManagedFBX::FBXProperty::GetLabel(bool pReturnNameIfEmpty)
{
	return StringHelper::ToManaged(m_NativeInstance->GetLabel(pReturnNameIfEmpty));
}

FBXObject^ ArcManagedFBX::FBXProperty::GetFbxObject()
{
	return gcnew FBXObject(m_NativeInstance->GetFbxObject());
}
