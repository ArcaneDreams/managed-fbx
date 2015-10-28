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

FBXDocument::FBXDocument(FbxDocument* instance) : FBXCollection(instance)
{
}

FBXDocumentInfo^ FBXDocument::GetDocumentInfo()
{
	return gcnew FBXDocumentInfo(GetFBXDocument()->GetDocumentInfo());
}

// Return whether or not a certain FBX object is in fact the root of this document
bool FBXDocument::IsRootMember(FBXObject^ other)
{
	return false;
}

void FBXDocument::SetDocumentInfo(FBXDocumentInfo^ info)
{
	this->GetFBXDocument()->SetDocumentInfo(info->GetFBXDocumentInfo());
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

FBXObject^ ArcManagedFBX::FBXDocument::GetRootMember(int32 index)
{
	return gcnew FBXObject(this->GetFBXDocument()->GetRootMember(index));
}

int32 ArcManagedFBX::FBXDocument::GetRootMemberCount()
{
	return this->GetFBXDocument()->GetRootMemberCount();
}

void ArcManagedFBX::FBXDocument::AddRootMember(FBXObject^ other)
{
	this->GetFBXDocument()->AddRootMember(other->GetFBXObject());
}
