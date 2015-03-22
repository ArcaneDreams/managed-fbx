#pragma once

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public ref class FBXLayer
	{
	public:
		FBXLayer(FbxLayer* instance);
		FBXLayer();
		!FBXLayer();
		~FBXLayer();

	private:
		FbxLayer* m_LayerInstance;
	};
}