#include "Stdafx.h"
#include "FBXManager.h"
#include "FBXIOSettings.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::IO;

ARC_FBXSDK_CLASS_IMPLEMENT(FBXIOSettings,FbxIOSettings,FBXObject)

// Default constructors that are to be used
FBXIOSettings::FBXIOSettings() : FBXObject()
{

}

FBXIOSettings::!FBXIOSettings()
{

}

FBXIOSettings::~FBXIOSettings()
{

}

FBXIOSettings::FBXIOSettings(FbxIOSettings* instance) : FBXObject(instance)
{
}

void ArcManagedFBX::IO::FBXIOSettings::SetIntProp(String^ pName, int pValue)
{
	GetFBXIOSettings()->SetIntProp(StringHelper::ToNative(pName),pValue);
}

int ArcManagedFBX::IO::FBXIOSettings::GetIntProp(String^ pName, int pDefValue)
{
	return GetFBXIOSettings()->GetIntProp(StringHelper::ToNative(pName),pDefValue);
}

void ArcManagedFBX::IO::FBXIOSettings::SetDoubleProp(String^ pName, double pValue)
{
	GetFBXIOSettings()->SetDoubleProp(StringHelper::ToNative(pName),pValue);
}

double ArcManagedFBX::IO::FBXIOSettings::GetDoubleProp(String^ pName, double pDefValue)
{
	return GetFBXIOSettings()->GetDoubleProp(StringHelper::ToNative(pName),pDefValue);
}

void ArcManagedFBX::IO::FBXIOSettings::SetBoolProp(String^ pName, bool pValue)
{
	GetFBXIOSettings()->SetBoolProp(StringHelper::ToNative(pName),pValue);
}

bool ArcManagedFBX::IO::FBXIOSettings::GetBoolProp(String^ pName, bool pDefValue)
{
	return GetFBXIOSettings()->GetBoolProp(StringHelper::ToNative(pName),pDefValue);
}

