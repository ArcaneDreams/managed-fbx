#include "Stdafx.h"
#include "FBXDocument.h"

using namespace System;
using namespace System::Text;
using namespace std;

using namespace ArcManagedFBX;

FBXDocument::FBXDocument()
{

}

FBXDocument::~FBXDocument()
{

}

FBXDocument::!FBXDocument()
{

}

FBXDocument::FBXDocument(FbxDocument* instance)
{

}

FBXDocumentInfo^ FBXDocument::GetDocumentInfo()
{
	return gcnew FBXDocumentInfo();
}

// Return whether or not a certain FBX object is in fact the root of this document
bool FBXDocument::IsRootMember(FBXObject^ other)
{
	return false;
}

void FBXDocument::SetDocumentInfo(FBXDocumentInfo^ info)
{

}



// Retrieve the root member
FBXObject^ FBXDocument::RootMember::get()
{
	return gcnew FBXObject(this->GetFBXDocument()->GetRootMember());
}

void FBXDocument::Clear()
{
	this->GetFBXDocument()->Clear();
}

int32 FBXDocument::RootMemberCount::get()
{
	return this->GetFBXDocument()->GetRootMemberCount();
}