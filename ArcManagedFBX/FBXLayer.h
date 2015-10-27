#pragma once

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public ref class FBXLayer
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXLayer)

	private:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXLayer,FbxLayer)

		FbxLayer* m_NativeInstance;
	};
}