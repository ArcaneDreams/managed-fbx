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

		void InitNormals(int32 count);

		void InitNormals(FBXGeometryBase^ source);

		void InitTangents(int32 count, int32 layerindex, String^ name);

		void InitTangents(FBXGeometryBase^ source, const int32 layerindex);

		void InitBinormals(int32 count, const int layerindex, String^ name);
		
		virtual void InitControlPoints(int32 count);

		void SetControlPoint(const FBXVector^ controlPoint, const FBXVector^ normal);

		void SetControlPointAt(const FBXVector^ controlPoint, int32 index);

		FBXVector GetControlPointAt(int32 index);
		
		int32 GetControlPointsCount();

		void ComputeBBox();

		ARC_PROPERTY_PUBLICGET(FBXVector,BBoxMax)
		
		ARC_PROPERTY_PUBLICGET(FBXVector,BBoxMin)
		
		ARC_PROPERTY_PUBLICGET(bool,CastShadow)
		
		ARC_PROPERTY_PUBLICGET(bool,ReceiveShadow)
		
		ARC_PROPERTY_PUBLICGET(bool,PrimaryVisibility)
			
		virtual array<FBXVector^>^ GetControlPoints(FBXStatus^ status);

	private:
		ARC_CHILD_CAST(NativeObject,FbxGeometryBase,FBXGeometryBase)


		void GetElementUV(String^ name);

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXGeometryBase,FbxGeometryBase)
	};
}