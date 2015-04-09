#pragma once

#include "FBXVector.h"
#include "FBXLayerContainer.h"

namespace ArcManagedFBX
{
	// The geometry base that is to be used
	public ref class FBXGeometryBase : public FBXLayerContainer
	{
	public:
		FBXGeometryBase();
		!FBXGeometryBase();
		virtual ~FBXGeometryBase();
	private:
		ARC_CHILD_CAST(NativeObject,FbxGeometryBase,FBXGeometryBase)

		void InitNormals(int32 count);

		void InitTangents(FBXGeometryBase^ source, const int32 layerindex);

		void InitBinormals(int32 count, const int layerindex, String^ name);
		
		void SetControlPoint(const FBXVector^ controlPoint, const FBXVector^ normal);

		void GetElementUV(String^ name);

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXGeometryBase,FbxGeometryBase)
	};
}