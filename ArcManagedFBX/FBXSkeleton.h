#pragma once

#include "FBXColour.h"
#include "FBXNodeAttribute.h"

using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Utility;

namespace ArcManagedFBX
{
	public ref class FBXSkeleton : public FBXNodeAttribute
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXSkeleton)
		
		ARC_CLR_CHILD_CAST(FBXSkeleton,FBXNodeAttribute,FbxSkeleton)

		typedef class FbxSkeleton NativeType;

		virtual EAttributeType GetAttributeType() override;

		void Reset();

		void SetSkeletonType(ESkeletonType type);
		
		ESkeletonType GetSkeletonType();

		bool GetSkeletonTypeIsSet();
		
		ESkeletonType GetSkeletonTypeDefaultValue();
		
		double GetLimbLengthDefaultValue();
		
		bool IsSkeletonRoot();

		bool GetLimbNodeColorIsSet();

		bool SetLimbNodeColor(FBXColour color);

		ARC_PROPERTY_FBXPROPERTY_PUBLICGET(float64,LimbLength)

		ARC_PROPERTY_FBXPROPERTY_PUBLICGET(float64,Size)

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXSkeleton,FbxSkeleton)

		ARC_CHILD_CAST(NativeObject,FbxSkeleton,FBXSkeleton)

	private:
	};
}