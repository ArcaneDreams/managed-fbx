#pragma once

namespace ArcManagedFBX
{
	namespace IO
	{
		// The exporter
		public ref class FBXExporter : FBXIOBase
		{
		public:
			ARC_FBXSDK_FBXOBJECT_IMPLEMENT(FBXExporter,FBXIOBase,FbxExporter)

			FBXExporter();

			FBXIOSettings^ GetIOSettings();

			void SetIOSettings(FBXIOSettings^ ioSettings);

			bool GetExportOptions();

			int GetFileFormat();

			bool IsFBX();

			bool Export(FBXDocument^ document, bool nonBlocking);

			bool IsExporting(bool exportResult);

			virtual bool Initialize(String^ fileName, int32 fileFormat, FBXIOSettings^ settings) override;
		internal:
			ARC_CHILD_CAST(NativeObject,FbxExporter,FBXExporter)
			ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXExporter,FbxExporter)
		};
	}
}