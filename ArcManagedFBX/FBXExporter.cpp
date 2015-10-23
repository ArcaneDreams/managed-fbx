#include "Stdafx.h"
#include "FBXIOSettings.h"
#include "FBXIOBase.h"
#include "FBXExporter.h"
#include "FBXDocument.h"

using namespace ArcManagedFBX::IO;
using namespace ArcManagedFBX::Utility;

ArcManagedFBX::IO::FBXExporter::FBXExporter() : FBXIOBase()
{
}

ArcManagedFBX::IO::FBXExporter::FBXExporter(FbxExporter* instance) : FBXIOBase(instance)
{
}

// Set the IO Settings that we are to use
void ArcManagedFBX::IO::FBXExporter::SetIOSettings(FBXIOSettings^ ioSettings)
{
	this->GetFBXExporter()->SetIOSettings(ioSettings->GetFBXIOSettings());
}

// Retrieve the io settings that are to be used
FBXIOSettings^ ArcManagedFBX::IO::FBXExporter::GetIOSettings()
{
	return gcnew FBXIOSettings(GetFBXExporter()->GetIOSettings());
}

bool ArcManagedFBX::IO::FBXExporter::Export(FBXDocument^ document, bool nonBlocking)
{
	return GetFBXExporter()->Export(document->GetFBXDocument(),nonBlocking);
}

bool ArcManagedFBX::IO::FBXExporter::IsExporting(bool exportResult)
{
	return GetFBXExporter()->IsExporting(exportResult);
}

bool ArcManagedFBX::IO::FBXExporter::Initialize(String^ fileName, int32 fileFormat, FBXIOSettings^ settings)
{
	return GetFBXExporter()->Initialize(StringHelper::ToNative(fileName),fileFormat,settings->GetFBXIOSettings());
}

bool ArcManagedFBX::IO::FBXExporter::GetExportOptions()
{
	return GetFBXExporter()->GetExportOptions();
}

bool ArcManagedFBX::IO::FBXExporter::IsFBX()
{
	return GetFBXExporter()->IsFBX();
}

int ArcManagedFBX::IO::FBXExporter::GetFileFormat()
{
	return GetFBXExporter()->GetFileFormat();
}
