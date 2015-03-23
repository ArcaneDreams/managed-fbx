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

bool FBXIOFileHeaderInfo::CreationTimeStampPresent::get()
{
	return false;
}

int32 FBXIOFileHeaderInfo::FileVersion::get()
{
	return 0;
}

void ArcManagedFBX::IO::FBXIOFileHeaderInfo::Reset()
{

}
