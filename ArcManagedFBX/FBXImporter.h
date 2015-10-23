#pragma once
#include "FBXFile.h"
#include "FBXDocument.h"
#include "FBXIOBase.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	namespace IO
	{
		// The FBX importer that we are working with
		public ref class FBXImporter : public FBXIOBase
		{
		public:
			FBXImporter();
			~FBXImporter();
			!FBXImporter();
	
			// Various functions relating to the importer that we are using
			bool Import(FBXDocument^ document, bool nonBlocking);

			float64 GetProgress(String^ status);

			void SetPassword(String^ password);

			virtual bool Initialize(String^ fileName, int fileFormat, FBXIOSettings^ settings) override;

			FBXStatus^ GetStatus();

			// Check whether we are still importing
			bool IsImporting(bool^ importResult);
			
			String^ GetEmbeddingExtractionFolder();

			FBXIOSettings^ GetIOSettings();

			void SetIOSettings(FBXIOSettings^ settings);

			int32 GetAnimStackCount();

			String^ GetActiveAnimStackName();

			FBXDocumentInfo^ GetSceneInfo();

			int32 GetFileFormat();

			bool IsFBX();

		private:
			ARC_CHILD_CAST(NativeObject,FbxImporter,FBXImporter)

		internal:

		};
	}
}