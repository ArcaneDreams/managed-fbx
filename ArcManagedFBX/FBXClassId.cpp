#include "Stdafx.h"
#include "FBXClassId.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Types;
using namespace System;

void ArcManagedFBX::FBXClassId::Destroy()
{

}

const String^ ArcManagedFBX::FBXClassId::GetName()
{
	return "";
}

bool ArcManagedFBX::FBXClassId::Is(const FBXClassId^ other)
{
	return false;
}

const String^ ArcManagedFBX::FBXClassId::GetFbxFileTypeName(bool bAskParent)
{
	return "";
}

const String^ ArcManagedFBX::FBXClassId::GetFbxFileSubTypeName()
{
	return "";
}

const String^ ArcManagedFBX::FBXClassId::GetObjectTypePrefix()
{
	return "";
}

const int32 ArcManagedFBX::FBXClassId::ClassInstanceIncRef()
{
	return 0;
}

const int32 ArcManagedFBX::FBXClassId::ClassInstanceDecRef()
{
	return 0;
}

const int32 ArcManagedFBX::FBXClassId::ClassInstanceRef()
{
	return 0;
}

bool ArcManagedFBX::FBXClassId::operator!=(const FBXClassId^ other)
{
	return false;
}

bool ArcManagedFBX::FBXClassId::operator==(const FBXClassId^ other)
{
	return false;
}
