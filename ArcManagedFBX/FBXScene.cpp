#include "Stdafx.h"
#include "FBXScene.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Exceptions;
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
	return this->GetFBXScene()->GetControlSetPlugCount();
}

int32 FBXScene::GetCurveOnSurfaceCount()
{
	return this->GetFBXScene()->GetCurveOnSurfaceCount();
}

void FBXScene::DestroyCharacter(int32 pIndex)
{
	this->GetFBXScene()->DestroyCharacter(pIndex);
}

int32 FBXScene::CreateCharacter(String^ pName)
{
	// Marshal down and then make the call on the create character
	const char* nameValue = StringHelper::ToNative(pName);

	return this->GetFBXScene()->CreateCharacter(nameValue);
}

FBXScene^ FBXScene::Import(String^ fileName)
{
	auto importer = FBXManager::GetImporter();

	if (!importer->Initialize(StringHelper::ToNative(fileName)))
		throw gcnew FBXException("Failed to initialize the FBX importer");

	auto scene = gcnew FBXScene();

	// Import in the scene that we are working with
	if (!importer->Import(scene->GetFBXScene()))
		throw gcnew FBXException("Failed to import the content into the FBX scene");



	return gcnew FBXScene();
}

void FBXScene::Export(String^ fileName)
{

}

void ArcManagedFBX::FBXScene::SyncShowPropertyForInstance()
{

}

void ArcManagedFBX::FBXScene::ConnectTextures()
{

}
