#pragma once

#include "FBXObject.h"
#include "FBXDocumentInfo.h"
#include "FBXCollection.h"

namespace ArcManagedFBX
{
	// The fbx document that we are working with
	public ref class FBXDocument : public FBXCollection
	{
	public:
		FBXDocument();
		virtual ~FBXDocument();
		!FBXDocument();
		virtual void Clear();

		void AddRootMember(FBXObject^ other);
		int32 GetRootMemberCount();
		FBXObject^ GetRootMember(int32 index);

		// Return whether or not this is a root member
		virtual bool IsRootMember(FBXObject^ member);
		FBXDocumentInfo^ GetDocumentInfo();
		void SetDocumentInfo(FBXDocumentInfo^ info);

		ARC_PROPERTY_PUBLICGET(int32,RootMemberCount)
		ARC_PROPERTY_PUBLICGET(FBXObject^,RootMember)

	internal:
		ARC_CHILD_CAST(NativeObject,FbxDocument,FBXDocument)
		FBXDocument(FbxDocument* instance);
	protected:

	private:
	};
}