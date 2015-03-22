#include "Stdafx.h"
#include "FBXScene.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Utility;

// The copy constructor for the scene
FBXScene::FBXScene(FBXScene^ other)
{

}

FBXScene::FBXScene()
{

}

// The destructor
FBXScene::~FBXScene()
{

}

FBXScene::FBXScene(FbxScene* instance)
{

}

// The finalizer
FBXScene::!FBXScene()
{
		
}

FBXNode^ FBXScene::GetRootNode()
{
	return gcnew FBXNode(this->GetFBXScene()->GetRootNode());
}

int32 FBXScene::GetControlSetPlugCount()
{
	return 0;
}

int32 FBXScene::GetCurveOnSurfaceCount()
{
	return 0;
}

void FBXScene::DestroyCharacter(int32 pIndex)
{

}

int32 FBXScene::CreateCharacter(String^ pName)
{
	return 0;
}



FBXScene^ FBXScene::Import(String^ fileName)
{
	auto importer = FBXManager::GetImporter();

	if (importer->Initialize(StringHelper::ToNative(fileName)))
	{

	}

	return gcnew FBXScene();
}

void FBXScene::Export(String^ fileName)
{

}