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

FBXManager::FBXManager(FbxManager* instance)
{
	this->m_Instance = instance;
}

bool ArcManagedFBX::FBXManager::SetLocale(String^ locale)
{
	return this->m_Instance->SetLocale(StringHelper::ToNative(locale));
}

void ArcManagedFBX::FBXManager::SetIOSettings(FBXIOSettings^ settings)
{
	this->m_Instance->SetIOSettings(settings->GetFBXIOSettings());
}

FBXIOSettings^ ArcManagedFBX::FBXManager::GetIOSettings()
{
	return gcnew FBXIOSettings(this->m_Instance->GetIOSettings());
}

int ArcManagedFBX::FBXManager::GetDataTypeCount()
{
	return this->m_Instance->GetDataTypeCount();
}

void ArcManagedFBX::FBXManager::GetFileFormatVersion(int^ major, int^ minor, int^ revision)
{
	int32 nmajor,nminor,nrevision;

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
	return gcnew FBXDocument(this->m_Instance->GetDocument(pIndex));
}

int ArcManagedFBX::FBXManager::GetReferenceCount()
{
	return this->m_Instance->GetReferenceCount();
}

int ArcManagedFBX::FBXManager::GetDocumentCount()
{
	return this->m_Instance->GetDocumentCount();
}

int ArcManagedFBX::FBXManager::GetPluginCount()
{
	return this->m_Instance->GetPluginCount();
}

// Retrieve the default manager that is used.
FBXManager^ ArcManagedFBX::FBXManager::GetDefaultManager()
{
	return gcnew FBXManager(FbxManager::GetDefaultManager());
}

bool ArcManagedFBX::FBXManager::UnloadPlugins()
{
	return this->m_Instance->UnloadPlugins();
}

// Load in the plugins directory in case there is anything that we want to be part of the sdk during runtime
bool ArcManagedFBX::FBXManager::LoadPluginsDirectory(String^ fileName, String^ extensions)
{
	return this->m_Instance->LoadPluginsDirectory(StringHelper::ToNative(fileName),StringHelper::ToNative(extensions));
}

// Load in a plugin as required
bool ArcManagedFBX::FBXManager::LoadPlugin(String^ fileName)
{
	return this->m_Instance->LoadPlugin(StringHelper::ToNative(fileName));
}
