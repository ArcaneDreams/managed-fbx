#include "Stdafx.h"
#include "FBXStatus.h"
#include "FBXImporter.h"
#include "FBXManager.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::IO;
using namespace ArcManagedFBX::Utility;

ARC_FBXSDK_CLASS_IMPLEMENT(FBXImporter,FbxImporter,FBXIOBase)

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXImporter,FBXIOBase,FbxImporter)

FBXImporter::FBXImporter() : FBXIOBase()
{

}

FBXImporter::!FBXImporter()
{

}

FBXImporter::~FBXImporter()
{

}

bool ArcManagedFBX::IO::FBXImporter::Import(FBXDocument^ document, bool nonBlocking)
{
	return this->GetFBXImporter()->Import(document->GetFBXDocument(),nonBlocking);
}

// Retrieve the progress of the importing
float64 ArcManagedFBX::IO::FBXImporter::GetProgress(String^ status)
{
	FbxString statusUpdate;
	auto progress = this->GetFBXImporter()->GetProgress(&statusUpdate);

	status = StringHelper::ToManaged(statusUpdate.Buffer());

	return progress;
}

bool ArcManagedFBX::IO::FBXImporter::IsImporting(bool^ importResult)
{
	bool resultImport = false;

	return this->GetFBXImporter()->IsImporting(resultImport);

	importResult = resultImport;

	return resultImport;
}

bool ArcManagedFBX::IO::FBXImporter::IsFBX()
{
	return this->GetFBXImporter()->IsFBX();
}

int32 ArcManagedFBX::IO::FBXImporter::GetFileFormat()
{
	return this->GetFBXImporter()->GetFileFormat();
}

FBXDocumentInfo^ ArcManagedFBX::IO::FBXImporter::GetSceneInfo()
{
	return gcnew FBXDocumentInfo(GetFBXImporter()->GetSceneInfo());
}

String^ ArcManagedFBX::IO::FBXImporter::GetActiveAnimStackName()
{
	String^ nativeAnimStackName = StringHelper::ToManaged(this->GetFBXImporter()->GetActiveAnimStackName().Buffer());

	return nativeAnimStackName;
}

int32 ArcManagedFBX::IO::FBXImporter::GetAnimStackCount()
{
	return this->GetFBXImporter()->GetAnimStackCount();
}

void ArcManagedFBX::IO::FBXImporter::SetIOSettings(FBXIOSettings^ settings)
{
	this->GetFBXImporter()->SetIOSettings(settings->GetFBXIOSettings());
}

FBXIOSettings^ ArcManagedFBX::IO::FBXImporter::GetIOSettings()
{
	return gcnew FBXIOSettings(GetFBXImporter()->GetIOSettings());
}

String^ ArcManagedFBX::IO::FBXImporter::GetEmbeddingExtractionFolder()
{
	return StringHelper::ToManaged(GetFBXImporter()->GetEmbeddingExtractionFolder());
}

// Set the password appropriately
void ArcManagedFBX::IO::FBXImporter::SetPassword(String^ password)
{
	char* passwordNative = const_cast<char*>(StringHelper::ToNative(password));
	//this->GetFBXImporter()->SetPassword(passwordNative);
}

bool ArcManagedFBX::IO::FBXImporter::Initialize(String^ fileName, int fileFormat, FBXIOSettings^ settings)
{
	const char* nativeFileName = StringHelper::ToNative(fileName);
	int32 nativefileFormat = fileFormat;
	FbxIOSettings* nativeSettings = settings->GetFBXIOSettings();

	return this->GetFBXImporter()->Initialize(nativeFileName,fileFormat,nativeSettings);
}

FBXStatus^ ArcManagedFBX::IO::FBXImporter::GetStatus()
{
	return gcnew FBXStatus(&this->GetFBXImporter()->GetStatus());
}

FBXIOFileHeaderInfo^ ArcManagedFBX::IO::FBXImporter::GetFileHeaderInfo()
{
	return gcnew FBXIOFileHeaderInfo(this->GetFBXImporter()->GetFileHeaderInfo());
}
