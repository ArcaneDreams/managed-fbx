#include "Stdafx.h"
#include "FBXSkeleton.h"

using namespace ArcManagedFBX;

FBXSkeleton::FBXSkeleton()
{

}

FBXSkeleton::~FBXSkeleton()
{

}

FBXSkeleton::!FBXSkeleton()
{

}

FBXSkeleton::FBXSkeleton(FbxSkeleton* instance)
{
	this->m_NativeObject = instance;
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

String^ ArcManagedFBX::FBXSkeleton::GetSize()
{
	return String::Empty;
}

String^ ArcManagedFBX::FBXSkeleton::GetLimbLength()
{
	return String::Empty;
}


bool ArcManagedFBX::FBXSkeleton::SetLimbNodeColor(FBXColour color)
{
	FbxColor newColor = FbxColor(color.R,color.G,color.B,color.A);

	return this->GetFBXSkeleton()->SetLimbNodeColor(newColor);
}

ArcManagedFBX::Types::AttributeType ArcManagedFBX::FBXSkeleton::GetAttributeType()
{
	return (AttributeType)this->GetFBXSkeleton()->GetAttributeType();
}

void ArcManagedFBX::FBXSkeleton::Reset()
{
	this->GetFBXSkeleton()->Reset();
}

float64 FBXSkeleton::LimbLength::get()
{
	return this->GetFBXSkeleton()->LimbLength;
}

float64 FBXSkeleton::Size::get()
{
	return this->GetFBXSkeleton()->Size;
}

