#pragma once

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	// The manager class that is used for generating the importer and the exporter
	// and for getting content and the like
	ref class FBXManager abstract sealed
	{
	public:
		static FBXManager();
		static FbxImporter* GetImporter();
		static FbxExporter* GetExporter();
		static FbxManager* GetManagerInstance();

		static const String^ GetVersion(bool full);
	private:
		static FbxManager* m_Manager;
		static FbxImporter* m_Importer;
		static FbxExporter* m_Exporter;
		static FbxGeometryConverter* m_Converter;
	};
}