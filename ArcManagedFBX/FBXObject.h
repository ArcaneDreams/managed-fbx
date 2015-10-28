#pragma once

#include "FBXTypes.h"
#include "FBXEmitter.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace System::Text;
using namespace ArcManagedFBX::Utility;

namespace ArcManagedFBX
{
	// Fuck yeah forward declar-- oh god why ;___;
	ref class FBXDocument;
	ref class FBXScene;
	ref class FBXManager;

	// The fbx object within the document that we are working with
	public ref class FBXObject : public FBXEmitter, public IDisposable
	{
	public:
		FBXObject();
		
		// The manager instance.
		FBXObject(FBXManager^ managerInstance, String^ objectName);
		
		virtual ~FBXObject();
		
		!FBXObject();
		
		ARC_FBXSDK_FBXOBJECT_IMPLEMENT(FBXObject,FBXEmitter,FbxObject)

		virtual void SetSelected(bool pSelected);

		virtual bool GetSelected();

		FBXManager^ GetManager();
		
		FBXDocument^ GetDocument();
		
		FBXDocument^ GetRootDocument();
		
		FBXScene^ GetScene();
		
		void SetAllObjectFlags(uint32 flags);

		uint32 GetAllObjectFlags();

		// Wrapping the relevant objects for this
		int GetReferencedByCount();
		FBXObject^ GetReferencedBy(int32 index);

		void ResetProperties();

		void Destroy([Optional] bool recursive);

		const String^ GetInitialName();
		
		const String^ GetName();
		void SetName(String^ name);
		
		const String^ GetNameSpaceOnly();
		
		const String^ GetNameOnly();
		
		const String^ GetNameSpacePrefix();

		const uint64 GetUniqueID();

		// This could be tricky to implement, will have to figure this out
		generic<class ObjectType> where ObjectType : FBXObject, gcnew()
		ObjectType GetSrcObject(int32 index);

		ARC_INLINE bool IsConnectedSrcObject(FBXObject^ other);
		ARC_INLINE bool DisconnectSrcObject(FBXObject^ other);

	protected:
		FbxObject* m_NativeObject;

		ARC_FORCEINLINE void SetInstance(FbxObject* nativeObjectInstance)
		{
			m_NativeObject = nativeObjectInstance;
		}

		FBXManager^ m_ManagerInstance;
	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXObject,FbxObject)
		FbxObject* GetFBXObject();
	};
}