#include "Stdafx.h"
#include "FBXIOBase.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::IO;

FBXIOBase::FBXIOBase()
{

}

FBXIOBase::~FBXIOBase()
{

}

FBXIOBase::!FBXIOBase()
{

}

FBXIOBase::FBXIOBase(FbxIOBase* instance)
{

}

String^ ArcManagedFBX::IO::FBXIOBase::GetFilename()
{
	return "";
}

bool ArcManagedFBX::IO::FBXIOBase::Initialize(String^ filename, int fileformat,FBXIOSettings^ iosettings)
{
	return false;
}
