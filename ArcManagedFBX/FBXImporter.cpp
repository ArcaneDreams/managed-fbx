#include "Stdafx.h"
#include "FBXImporter.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::IO;

FBXImporter::FBXImporter()
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
	return false;
}

float64 ArcManagedFBX::IO::FBXImporter::GetProgress(String^ status)
{
	return 0.f;
}
