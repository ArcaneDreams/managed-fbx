#include "Stdafx.h"
#include "FBXSkeleton.h"

using namespace ArcManagedFBX;

FBXSkeleton::FBXSkeleton() : FBXNodeAttribute()
{

}

FBXSkeleton::~FBXSkeleton()
{

}

FBXSkeleton::!FBXSkeleton()
{

}

ARC_PROPERTY_FBXPROPERTY_PUBLICGET_IMPL(float64,FBXSkeleton,LimbLength)

ARC_PROPERTY_FBXPROPERTY_PUBLICGET_IMPL(float64,FBXSkeleton,Size)

FBXSkeleton::FBXSkeleton(FbxSkeleton* instance) : FBXNodeAttribute(instance)
{
}

void ArcManagedFBX::FBXSkeleton::SetSkeletonType(ESkeletonType type)
{
	this->GetFBXSkeleton()->SetSkeletonType((FbxSkeleton::EType)type);
}

ArcManagedFBX::Types::ESkeletonType ArcManagedFBX::FBXSkeleton::GetSkeletonType()
{
	return (ESkeletonType)this->GetFBXSkeleton()->GetSkeletonType();
}

bool ArcManagedFBX::FBXSkeleton::GetSkeletonTypeIsSet()
{
	return this->GetFBXSkeleton()->GetSkeletonTypeIsSet();
}

ArcManagedFBX::Types::ESkeletonType ArcManagedFBX::FBXSkeleton::GetSkeletonTypeDefaultValue()
{
	return (ESkeletonType)this->GetFBXSkeleton()->GetSkeletonTypeDefaultValue();
}

double ArcManagedFBX::FBXSkeleton::GetLimbLengthDefaultValue()
{
	return this->GetFBXSkeleton()->GetLimbLengthDefaultValue();
}

bool ArcManagedFBX::FBXSkeleton::IsSkeletonRoot()
{
	return this->GetFBXSkeleton()->IsSkeletonRoot();
}

bool ArcManagedFBX::FBXSkeleton::GetLimbNodeColorIsSet()
{
	return this->GetFBXSkeleton()->GetLimbNodeColorIsSet();
}


bool ArcManagedFBX::FBXSkeleton::SetLimbNodeColor(FBXColour color)
{
	FbxColor newColor = FbxColor(color.R,color.G,color.B,color.A);

	return this->GetFBXSkeleton()->SetLimbNodeColor(newColor);
}

ArcManagedFBX::Types::EAttributeType ArcManagedFBX::FBXSkeleton::GetAttributeType()
{
	return (EAttributeType)this->GetFBXSkeleton()->GetAttributeType();
}

void ArcManagedFBX::FBXSkeleton::Reset()
{
	this->GetFBXSkeleton()->Reset();
}

