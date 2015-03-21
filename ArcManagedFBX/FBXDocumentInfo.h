#pragma once
#include "FBXObject.h"

namespace ArcManagedFBX
{
	public ref class FBXDocumentInfo : public FBXObject
	{
	public:
		FBXDocumentInfo();
		~FBXDocumentInfo();
		!FBXDocumentInfo();
	private:
		ARC_CHILD_CAST(NativeObject,FbxDocumentInfo,FBXDocumentInfo)
	internal:
		FBXDocumentInfo(FbxDocumentInfo* instance);
	};
}