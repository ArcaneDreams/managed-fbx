#pragma once


#include "FBXObject.h"

namespace ArcManagedFBX
{
	public ref class FBXDocumentInfo : public FBXObject
	{
	public:
		ARC_FBXSDK_FBXOBJECT_IMPLEMENT(FBXDocumentInfo,FBXObject,FbxDocumentInfo)

		ARC_DEFAULT_CONSTRUCTORS(FBXDocumentInfo)
		ARC_PROPERTY_PUBLICGET(String^,Title)
		ARC_PROPERTY_PUBLICGET(String^,Subject)
		ARC_PROPERTY_PUBLICGET(String^,Author)
		ARC_PROPERTY_PUBLICGET(String^,Keywords)
		ARC_PROPERTY_PUBLICGET(String^,Revision)
		ARC_PROPERTY_PUBLICGET(String^,Comment)
		// The various properties for the document information that we are working on
		ARC_PROPERTY_PUBLICGET(String^,Url)
		ARC_PROPERTY_PUBLICGET(String^,LastSavedUrl)
		ARC_PROPERTY_PUBLICGET(String^,OriginalApplicationName)
		ARC_PROPERTY_PUBLICGET(String^,OriginalApplicationVendor)
		ARC_PROPERTY_PUBLICGET(String^,OriginalApplicationVersion)
		ARC_PROPERTY_PUBLICGET(String^,OriginalFileName)
		ARC_PROPERTY_PUBLICGET(String^,LastSavedApplicationName)
		ARC_PROPERTY_PUBLICGET(String^,LastSavedApplicationVendor)
		ARC_PROPERTY_PUBLICGET(String^,LastSavedApplicationVersion)
		ARC_PROPERTY_PUBLICGET(String^,EmbeddedUrl)
	private:

		

		void Clear();
	internal:
		FBXDocumentInfo(FbxDocumentInfo* instance);

		ARC_CHILD_CAST(NativeObject,FbxDocumentInfo,FBXDocumentInfo)
	};
}