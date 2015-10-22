#pragma once

namespace ArcManagedFBX
{
	namespace IO
	{
		// The exporter
		public ref class FBXExporter : FBXIOBase
		{
		public:
			ARC_FBX_FBXOBJECT_IMPLEMENT(FBXExporter,FBXIOBase)

			FBXExporter();

			FBXIOSettings^ GetIOSettings();

			void SetIOSettings(FBXIOSettings^ ioSettings);

			bool Export(FBXDocument^ document, bool nonBlocking);

			bool IsExporting(bool exportResult);

		internal:
			ARC_CHILD_CAST(NativeObject,FbxExporter,FBXExporter)
			FBXExporter(FbxExporter* instance)
			{
				m_NativeObject = instance;
			}
		};
	}
}