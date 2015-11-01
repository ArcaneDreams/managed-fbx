#include "Stdafx.h"
#include "FBXScene.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Exceptions;
using namespace ArcManagedFBX::Utility;

ARC_FBXSDK_CLASS_IMPLEMENT(FBXScene,FbxScene,FBXDocument)

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXScene,FBXDocument,FbxScene)

ARC_DEFAULT_CONSTRUCTORS_INHERIT_IMPL(FBXScene,FBXDocument)

FBXNode^ FBXScene::GetRootNode()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");

	return gcnew FBXNode(this->GetFBXScene()->GetRootNode());
}

int32 FBXScene::GetControlSetPlugCount()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");

	return this->GetFBXScene()->GetControlSetPlugCount();
}

int32 FBXScene::GetCurveOnSurfaceCount()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");

	return this->GetFBXScene()->GetCurveOnSurfaceCount();
}

void FBXScene::DestroyCharacter(int32 pIndex)
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");
	this->GetFBXScene()->DestroyCharacter(pIndex);
}

int32 FBXScene::CreateCharacter(String^ pName)
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");

	// Marshal down and then make the call on the create character
	const char* nameValue = StringHelper::ToNative(pName);

	return this->GetFBXScene()->CreateCharacter(nameValue);
}

void ArcManagedFBX::FBXScene::SyncShowPropertyForInstance()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");

	this->GetFBXScene()->SyncShowPropertyForInstance();
}

void ArcManagedFBX::FBXScene::ConnectTextures()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");

	this->GetFBXScene()->ConnectTextures();
}

FBXDocumentInfo^ ArcManagedFBX::FBXScene::GetSceneInfo()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");

	return gcnew FBXDocumentInfo(this->GetFBXScene()->GetSceneInfo());
}

int32 ArcManagedFBX::FBXScene::GetCharacterCount()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");

	return this->GetFBXScene()->GetCharacterCount();
}

int32 ArcManagedFBX::FBXScene::GetGenericNodeCount()
{
	ARC_CHECK_AND_THROW(m_NativeObject == nullptr, "The native instance of this object is null. Check and try again.");


	return this->GetFBXScene()->GetGenericNodeCount();
}
