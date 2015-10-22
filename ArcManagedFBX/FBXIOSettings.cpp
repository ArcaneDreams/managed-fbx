#include "Stdafx.h"
#include "FBXIOSettings.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::IO;

// Default constructors that are to be used
FBXIOSettings::FBXIOSettings()
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

void ArcManagedFBX::IO::FBXIOSettings::AddPropertyGroup(String^ name)
{
	const char* nativeName = StringHelper::ToNative(name);

}

