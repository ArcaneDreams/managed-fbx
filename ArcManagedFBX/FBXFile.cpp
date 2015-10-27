#include "Stdafx.h"
#include "FBXTypes.h"
#include "FBXFile.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::IO;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Exceptions;

FBXFile::!FBXFile()
{

}

FBXFile::~FBXFile()
{

}

FBXFile::FBXFile()
{

}

bool ArcManagedFBX::IO::FBXFile::Open(String^ pFilename, EFileMode mode, bool binary)
{
	return false;
}

void ArcManagedFBX::IO::FBXFile::Seek(const int64 offset, const EFileSeekPos pos)
{

}

bool ArcManagedFBX::IO::FBXFile::Close()
{
	return false;
}
