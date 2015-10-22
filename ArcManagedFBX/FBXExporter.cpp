#include "Stdafx.h"
#include "FBXIOSettings.h"
#include "FBXIOBase.h"
#include "FBXExporter.h"
#include "FBXDocument.h"

using namespace ArcManagedFBX::IO;

ArcManagedFBX::IO::FBXExporter::FBXExporter() : FBXIOBase()
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
