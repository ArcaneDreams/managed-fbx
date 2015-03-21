#include "Stdafx.h"
#include "FBXManager.h"

using namespace ArcManagedFBX;

FBXManager::FBXManager()
{
	m_Manager = FbxManager::Create();
	m_Importer = FbxImporter::Create(m_Manager, "Importer");
	m_Exporter = FbxExporter::Create(m_Manager, "Importer");
	m_Converter = new FbxGeometryConverter(m_Manager);
}

// Get the importer
FbxImporter* FBXManager::GetImporter()
{
	return FBXManager::m_Importer;
}

// Get the exporter.
FbxExporter* FBXManager::GetExporter()
{
	return FBXManager::m_Exporter;
}

const String^ FBXManager::GetVersion(bool full)
{
	return "";
}