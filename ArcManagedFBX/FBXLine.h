#pragma once
#ifndef FBXLine_h__
#define FBXLine_h__

#include "FBXGeometry.h"

using namespace System::Runtime;
using namespace System::Runtime::InteropServices;

namespace ArcManagedFBX
{
	public ref class FBXLine : public FBXGeometry
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXLine)

		bool AddEndPoint(int32 pointIndex);

		int GetEndPointAt(int32 endPointIndex);

		int32 GetEndPointCount();

		bool AddPointIndex(int32 value, bool asEndPoint);
	private:

	internal:
		ARC_CHILD_CAST(NativeObject,FbxLine,FBXLine)
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXLine,FbxLine)
	};
}
#endif // FBXLine_h__