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
		ARC_FBXSDK_CLASS_DECLARE(FBXScene,FbxScene,FBXDocument)
	public:

		// Constructors that are to be used
		FBXScene();
		virtual ~FBXScene();
		!FBXScene();

		int32 CreateCharacter(String^ pName);

		void DestroyCharacter(int32 pIndex);

		int32 GetGenericNodeCount();

		int32 GetCharacterCount();

		int32 GetControlSetPlugCount();

		int32 GetCurveOnSurfaceCount();

		FBXNode^ GetRootNode();

		FBXDocumentInfo^ GetSceneInfo();

		void SyncShowPropertyForInstance();

		void ConnectTextures();

	internal:
		FBXScene(FbxScene* instance);

	private:
		FBXScene^ m_RootNode;
		FbxManager* m_NativeManager;

		ARC_CHILD_CAST(NativeObject,FbxScene,FBXScene)
	};
}