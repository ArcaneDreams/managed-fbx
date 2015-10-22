#include "Stdafx.h"
#include "FBXProperty.h"

using namespace ArcManagedFBX;

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

}

void ArcManagedFBX::FBXProperty::DestroyRecursively()
{

}

void ArcManagedFBX::FBXProperty::DestroyChildren()
{

}

String^ ArcManagedFBX::FBXProperty::GetName()
{
	return String::Empty;
}

String^ ArcManagedFBX::FBXProperty::GetHierarchicalName()
{
	return String::Empty;
}

void ArcManagedFBX::FBXProperty::SetUserTag(int pTag)
{

}

int ArcManagedFBX::FBXProperty::GetUserTag()
{
	return 0;
}
