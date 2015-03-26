#pragma once

#include "StringHelper.h"

#include "FBXNode.h"
#include "FBXDocument.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public ref class FBXScene : public FBXDocument
	{
	public:
		// Constructors that are to be used
		FBXScene();
		FBXScene(FBXScene^ other);
		virtual ~FBXScene();
		!FBXScene();

		// The nicely wrapped methods.
		int32 CreateCharacter(String^ pName);
		void DestroyCharacter(int32 pIndex);
		int32 GetControlSetPlugCount();
		int32 GetCurveOnSurfaceCount();

		FBXNode^ GetRootNode();

		void SyncShowPropertyForInstance();
		void ConnectTextures();



		// Import / export operations that are to be performed
		FBXScene^ Import(String^ fileName);
		void Export(String^ fileName);

	internal:
		FBXScene(FbxScene* instance);

	private:
		FBXScene^ m_RootNode;
		FbxManager* m_NativeManager;

		ARC_CHILD_CAST(NativeObject,FbxScene,FBXScene)
	};
}