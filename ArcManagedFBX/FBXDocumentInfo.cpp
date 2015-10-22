#include "Stdafx.h"
#include "FBXDocumentInfo.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Exceptions;
using namespace ArcManagedFBX::Types;

using namespace std;
using namespace System;
using namespace System::Text;

// The internal declaration for the document info
FBXDocumentInfo::FBXDocumentInfo(FbxDocumentInfo* instance) : FBXObject(instance)
{
}

FBXDocumentInfo::FBXDocumentInfo() : FBXObject()
{

}

FBXDocumentInfo::~FBXDocumentInfo()
{

}

FBXDocumentInfo::!FBXDocumentInfo()
{

}

// Clear out the document info that is to be used
void ArcManagedFBX::FBXDocumentInfo::Clear()
{
	this->GetFBXDocumentInfo()->Clear();
}

// The implementations for the game that we are after.
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,Url,Url)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,LastSavedUrl,LastSavedUrl)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,Original_ApplicationName,OriginalApplicationName)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,Original_ApplicationVendor,OriginalApplicationVendor)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,Original_ApplicationVersion,OriginalApplicationVersion)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,Original_FileName,OriginalFileName)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,LastSaved_ApplicationName,LastSavedApplicationName)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,LastSaved_ApplicationVendor,LastSavedApplicationVendor)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,LastSaved_ApplicationVersion,LastSavedApplicationVersion)
ARC_IMPL_GET_STRING_PROP(FBXDocumentInfo,EmbeddedUrl,EmbeddedUrl)

// Define the properties for the title subject, author and keywords etc.
ARC_IMPL_GET_STRING_MEMBER(FBXDocumentInfo,mTitle,Title)
ARC_IMPL_GET_STRING_MEMBER(FBXDocumentInfo,mSubject,Subject)
ARC_IMPL_GET_STRING_MEMBER(FBXDocumentInfo,mAuthor,Author)
ARC_IMPL_GET_STRING_MEMBER(FBXDocumentInfo,mKeywords,Keywords)
ARC_IMPL_GET_STRING_MEMBER(FBXDocumentInfo,mRevision,Revision)
ARC_IMPL_GET_STRING_MEMBER(FBXDocumentInfo,mComment,Comment)
