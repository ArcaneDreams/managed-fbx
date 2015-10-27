#include "Stdafx.h"
#include "FBXLayerContainer.h"

using namespace ArcManagedFBX;

FBXLayerContainer::FBXLayerContainer()
{

}

FBXLayerContainer::FBXLayerContainer(FbxLayerContainer* instance) : FBXNodeAttribute(instance)
{
	this->m_NativeObject = instance;
}

FBXLayerContainer::~FBXLayerContainer()
{

}

FBXLayerContainer::!FBXLayerContainer()
{

}

int32 ArcManagedFBX::FBXLayerContainer::GetLayerCount(ELayerType type, bool uvCount)
{
	return this->GetFBXLayerContainer()->GetLayerCount((FbxLayerElement::EType)type,uvCount);
}

int32 ArcManagedFBX::FBXLayerContainer::GetLayerCount()
{
	return this->GetFBXLayerContainer()->GetLayerCount();
}

void ArcManagedFBX::FBXLayerContainer::ClearLayers()
{
	this->GetFBXLayerContainer()->ClearLayers();
}

FBXLayer^ ArcManagedFBX::FBXLayerContainer::GetLayer(int32 index,ELayerType type, bool isUv)
{
	return gcnew FBXLayer(this->GetFBXLayerContainer()->GetLayer(index,(FbxLayerElement::EType)type,isUv));
}

FBXLayer^ ArcManagedFBX::FBXLayerContainer::GetLayer(int32 index)
{
	return gcnew FBXLayer();
}

int32 ArcManagedFBX::FBXLayerContainer::CreateLayer()
{
	return this->GetFBXLayerContainer()->CreateLayer();
}
