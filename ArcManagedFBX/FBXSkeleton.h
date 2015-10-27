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

		typedef class FbxSkeleton NativeType;

		virtual AttributeType GetAttributeType() override;

		void Reset();

		void SetSkeletonType(ESkeletonType type);
		
		ESkeletonType GetSkeletonType();

		bool GetSkeletonTypeIsSet();
		
		ESkeletonType GetSkeletonTypeDefaultValue();
		
		double GetLimbLengthDefaultValue();
		
		bool IsSkeletonRoot();

		bool GetLimbNodeColorIsSet();

		static String^ GetSize();
		static String^ GetLimbLength();

		bool SetLimbNodeColor(FBXColour color);

		ARC_PROPERTY_PUBLICGET(float64,LimbLength)
		ARC_PROPERTY_PUBLICGET(float64,Size)

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXSkeleton,FbxSkeleton)
		ARC_CHILD_CAST(NativeObject,FbxSkeleton,FBXSkeleton)

	private:
	};
}