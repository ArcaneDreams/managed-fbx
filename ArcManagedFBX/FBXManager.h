#pragma once

#include "FBXIOSettings.h"
#include "FBXDocument.h"
#include "FBXClassId.h"
#include "FBXIOPluginRegistry.h"

using namespace System;
using namespace System::Text;

using namespace ArcManagedFBX::IO;

namespace ArcManagedFBX
{
	// The manager class that is used for generating the importer and the exporter
	// and for getting content and the like
	public ref class FBXManager
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXManager)

		static FBXManager^ Create();

		static FBXManager^ GetDefaultManager();

		virtual void Destroy();

		static String^ GetVersion(bool full);

		static void GetFileFormatVersion(int% major, int% minor, int% revision);

		FBXObject^ CreateNewObjectFromClassId(FBXClassId^ classId, String^ name, FBXObject^ container);

		int GetDataTypeCount();

		virtual FBXIOSettings^ GetIOSettings();

		virtual void SetIOSettings(FBXIOSettings^ settings);

		bool SetLocale(String^ locale);

		int GetReferenceCount();
		
		FBXDocument^ GetDocument(int pIndex);

		int GetDocumentCount();

		FBXIOPluginRegistry^ GetIOPluginRegistry();

		int GetPluginCount();

		bool LoadPlugin(String^ fileName);

		bool LoadPluginsDirectory(String^ fileName, String^ extensions);

		bool UnloadPlugins();
	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXManager,FbxManager)

		// Return the FBX manager instance that is to be used
		ARC_FORCEINLINE FbxManager* GetFBXManager()
		{
			ARC_CHECK_AND_THROW(m_Instance == NULL,"The FBX Manager instance is null. Check and try again.")

			return m_Instance;
		}
	protected:
		
	private:
		FbxManager* m_Instance;
	};
}