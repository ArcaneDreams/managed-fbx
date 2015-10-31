#include "Stdafx.h"
#include "FBXIOBase.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::IO;

FBXIOBase::FBXIOBase() : FBXObject() 
{

}

FBXIOBase::~FBXIOBase()
{

}

FBXIOBase::!FBXIOBase()
{

}

FBXIOBase::FBXIOBase(FbxIOBase* instance) : FBXObject(instance)
{

}

String^ ArcManagedFBX::IO::FBXIOBase::GetFilename()
{
	return StringHelper::ToManaged(this->GetFBXIOBase()->GetFileName().Buffer());
}

bool ArcManagedFBX::IO::FBXIOBase::Initialize(String^ filename, int fileformat,FBXIOSettings^ iosettings)
{
	return this->GetFBXIOBase()->Initialize(StringHelper::ToNative(filename),fileformat,iosettings->GetFBXIOSettings());
}
