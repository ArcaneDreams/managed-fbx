#include "Stdafx.h"
#include "FBXManager.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Exceptions;
using namespace ArcManagedFBX::IO;

FBXManager::FBXManager()
{

}

FBXManager::~FBXManager()
{

}

FBXManager::!FBXManager()
{

}

FBXManager::FBXManager(FbxManager* instance) : m_Instance(instance)
{
}

bool ArcManagedFBX::FBXManager::SetLocale(String^ locale)
{
	return this->m_Instance->SetLocale(StringHelper::ToNative(locale));
}

void ArcManagedFBX::FBXManager::SetIOSettings(FBXIOSettings^ settings)
{
	FbxIOSettings* instance = settings->GetFBXIOSettings();

	// Retrieve the IO Settings that are to be used
	this->m_Instance->SetIOSettings(instance);
}

FBXIOSettings^ ArcManagedFBX::FBXManager::GetIOSettings()
{
	return gcnew FBXIOSettings(this->m_Instance->GetIOSettings());
}

int ArcManagedFBX::FBXManager::GetDataTypeCount()
{
	return this->m_Instance->GetDataTypeCount();
}

void ArcManagedFBX::FBXManager::GetFileFormatVersion(int% major, int% minor, int% revision)
{
	int32 nmajor = 0,nminor = 0,nrevision = 0;

	FbxManager::GetFileFormatVersion(nmajor,nminor,nrevision);

	major = nmajor;
	minor = nminor;
	revision = nrevision;
}

String^ ArcManagedFBX::FBXManager::GetVersion(bool full/*=true*/)
{
	return StringHelper::ToManaged(FbxManager::GetVersion(full));
}

void ArcManagedFBX::FBXManager::Destroy()
{
	this->m_Instance->Destroy();
}

FBXManager^ ArcManagedFBX::FBXManager::Create()
{
	return gcnew FBXManager(FbxManager::Create());
}

// return the document from the fbx manager.
FBXDocument^ ArcManagedFBX::FBXManager::GetDocument(int pIndex)
{
	ARC_CHECK_AND_THROW(m_Instance == nullptr,"FBXManager instance is null. Check and try again.")

	return gcnew FBXDocument(this->m_Instance->GetDocument(pIndex));
}

int ArcManagedFBX::FBXManager::GetReferenceCount()
{
	ARC_CHECK_AND_THROW(m_Instance == nullptr,"FBXManager instance is null. Check and try again.")

	return this->m_Instance->GetReferenceCount();
}

int ArcManagedFBX::FBXManager::GetDocumentCount()
{
	ARC_CHECK_AND_THROW(m_Instance == nullptr,"FBXManager instance is null. Check and try again.")

	return this->m_Instance->GetDocumentCount();
}

int ArcManagedFBX::FBXManager::GetPluginCount()
{
	ARC_CHECK_AND_THROW(m_Instance == nullptr,"FBXManager instance is null. Check and try again.")

	return this->m_Instance->GetPluginCount();
}

// Retrieve the default manager that is used.
FBXManager^ ArcManagedFBX::FBXManager::GetDefaultManager()
{
	ARC_CHECK_AND_THROW(FbxManager::GetDefaultManager() == nullptr,"FBXManager instance is null. Check and try again.")

	return gcnew FBXManager(FbxManager::GetDefaultManager());
}

bool ArcManagedFBX::FBXManager::UnloadPlugins()
{
	ARC_CHECK_AND_THROW(m_Instance == nullptr,"FBXManager instance is null. Check and try again.")

	return this->m_Instance->UnloadPlugins();
}

// Load in the plugins directory in case there is anything that we want to be part of the sdk during runtime
bool ArcManagedFBX::FBXManager::LoadPluginsDirectory(String^ fileName, String^ extensions)
{
	ARC_CHECK_AND_THROW(m_Instance == nullptr,"FBXManager instance is null. Check and try again.")

	return this->m_Instance->LoadPluginsDirectory(StringHelper::ToNative(fileName),StringHelper::ToNative(extensions));
}

// Load in a plugin as required
bool ArcManagedFBX::FBXManager::LoadPlugin(String^ fileName)
{
	ARC_CHECK_AND_THROW(m_Instance == nullptr,"FBXManager instance is null. Check and try again.")

	return this->m_Instance->LoadPlugin(StringHelper::ToNative(fileName));
}

// Instantiate the new fbx object instance.
FBXObject^ ArcManagedFBX::FBXManager::CreateNewObjectFromClassId(FBXClassId^ classId, String^ name, FBXObject^ container)
{
	ARC_CHECK_AND_THROW(m_Instance == nullptr,"FBXManager instance is null. Check and try again.")

	return gcnew FBXObject(this->GetFBXManager()->CreateNewObjectFromClassId(*classId->GetFbxClassId(),StringHelper::ToNative(name),container->GetFBXObject()));
}

FBXIOPluginRegistry^ ArcManagedFBX::FBXManager::GetIOPluginRegistry()
{
	return gcnew FBXIOPluginRegistry(m_Instance->GetIOPluginRegistry());
}
