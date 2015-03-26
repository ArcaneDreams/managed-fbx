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

// For loading in the fbx scene into the project
FBXScene^ FBXScene::Import(String^ fileName)
{

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
