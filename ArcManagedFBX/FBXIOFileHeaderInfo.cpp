#include "Stdafx.h"
#include "FBXIOFileHeaderInfo.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::IO;
using namespace ArcManagedFBX::Utility;

FBXIOFileHeaderInfo::FBXIOFileHeaderInfo()
{

}

FBXIOFileHeaderInfo::!FBXIOFileHeaderInfo()
{

}

FBXIOFileHeaderInfo::~FBXIOFileHeaderInfo()
{

}

FBXIOFileHeaderInfo::FBXIOFileHeaderInfo(FbxIOFileHeaderInfo* instance)
{
	this->instance = instance;
}

bool FBXIOFileHeaderInfo::CreationTimeStampPresent::get()
{
	return this->instance->mCreationTimeStampPresent;
}

int32 FBXIOFileHeaderInfo::FileVersion::get()
{
	return this->instance->mFileVersion;
}

void ArcManagedFBX::IO::FBXIOFileHeaderInfo::Reset()
{
	this->instance->Reset();
}
