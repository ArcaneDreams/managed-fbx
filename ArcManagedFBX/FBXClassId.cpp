#include "Stdafx.h"
#include "FBXObject.h"
#include "FBXClassId.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Types;
using namespace System;

void ArcManagedFBX::FBXClassId::Destroy()
{
	m_NativeInstance->Destroy();
}

const String^ ArcManagedFBX::FBXClassId::GetName()
{
	return StringHelper::ToManaged(m_NativeInstance->GetName());
}

bool ArcManagedFBX::FBXClassId::Is(const FBXClassId^ other)
{
	return m_NativeInstance->Is(*other->m_NativeInstance);
}

const String^ ArcManagedFBX::FBXClassId::GetFbxFileTypeName(bool bAskParent)
{
	return StringHelper::ToManaged(m_NativeInstance->GetFbxFileTypeName(bAskParent));
}

const String^ ArcManagedFBX::FBXClassId::GetFbxFileSubTypeName()
{
	return StringHelper::ToManaged(m_NativeInstance->GetFbxFileSubTypeName());
}

const String^ ArcManagedFBX::FBXClassId::GetObjectTypePrefix()
{
	return StringHelper::ToManaged(m_NativeInstance->GetObjectTypePrefix());
}

const int32 ArcManagedFBX::FBXClassId::ClassInstanceIncRef()
{
	return m_NativeInstance->ClassInstanceIncRef();
}

const int32 ArcManagedFBX::FBXClassId::ClassInstanceDecRef()
{
	return m_NativeInstance->ClassInstanceDecRef();
}

const int32 ArcManagedFBX::FBXClassId::GetInstanceRef()
{
	return m_NativeInstance->GetInstanceRef();
}

ArcManagedFBX::FBXClassId::FBXClassId(String^ className, FBXClassId^ parentClassId)
{

}

ArcManagedFBX::FBXClassId::FBXClassId(FbxClassId* instance)
{
	m_NativeInstance = instance;
}

ArcManagedFBX::FBXClassId::FBXClassId()
{

}

bool ArcManagedFBX::FBXClassId::operator!=(const FBXClassId^ other)
{
	return *other->m_NativeInstance != *this->m_NativeInstance;
}

bool ArcManagedFBX::FBXClassId::operator==(const FBXClassId^ other)
{
	return *other->m_NativeInstance == *this->m_NativeInstance;
}
