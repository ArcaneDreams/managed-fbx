#pragma once

#include "FBXColour.h"
#include "FBXAttribute.h"

using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Utility;

namespace ArcManagedFBX
{
	// The skeleton representation
	public ref class FBXSkeleton : public FBXAttribute
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXSkeleton)

		typedef class FbxSkeleton NativeType;

		virtual AttributeType GetAttributeType() override;

		void Reset();

		void SetSkeletonType(SkeletonType type);
		SkeletonType GetSkeletonType();

		bool GetSkeletonTypeIsSet();
		SkeletonType GetSkeletonTypeDefaultValue();
		double GetLimbLengthDefaultValue();
		bool IsSkeletonRoot();

		bool GetLimbNodeColorIsSet();

		static String^ sSize;
		static String^ sLimbLength;

		static float64 DefaultSize;
		static float64 DefaultLimbLength;

		bool SetLimbNodeColor(FBXColour color);

		ARC_PROPERTY_PUBLICGET(float64,LimbLength)
		ARC_PROPERTY_PUBLICGET(float64,Size)

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXSkeleton,FbxSkeleton)
		ARC_CHILD_CAST(NativeObject,FbxSkeleton,FBXSkeleton)

	private:
	};
}