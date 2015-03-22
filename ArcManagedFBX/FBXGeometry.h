#pragma once

using namespace System;
using namespace System::Text;

#include "FBXGeometryBase.h"

namespace ArcManagedFBX
{
	public ref class FBXGeometry : public FBXGeometryBase
	{
	public:
		FBXGeometry();
		FBXGeometry(FbxGeometry* instance);
		~FBXGeometry();
		!FBXGeometry();

	private:

	internal:
		FBXGeometry(FbxGeometry* instance);
	};
}