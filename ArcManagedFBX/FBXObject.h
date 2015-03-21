#pragma once

#include "FBXTypes.h"
#include "FBXManager.h"
#include "FBXEmitter.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	// Delicious forward declarations because fuck you that's why.
	ref class FBXDocument;
	ref class FBXScene;

	// The object instance that we are working with
	public ref class FBXObject : public FBXEmitter, public IDisposable
	{
	public:
		FBXObject();
		virtual ~FBXObject();
		virtual void SetSelected(bool pSelected);
		virtual bool GetSelected();

		// A bunch of getters in this instance.
		const FBXManager^ GetManager();
		const FBXDocument^ GetDocument();
		const FBXDocument^ GetRootDocument();
		const FBXScene^ GetScene();
		
		void SetAllObjectFlags(uint32 flags);
		uint32 GetAllObjectFlags();

		// Wrapping the relevant objects for this
		int GetReferencedByCount();
		FBXObject^ GetReferencedBy(int32 index);

		void ResetProperties();

		void Destroy(bool recursive);

		const String^ GetInitialName();
		const String^ GetName();

	protected:
		FbxObject* m_NativeObject;
		
	internal:
		FBXObject(FbxObject* objectInstance);
	};
}