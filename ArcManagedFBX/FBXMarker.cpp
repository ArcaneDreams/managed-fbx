#include "Stdafx.h"
#include "FBXNodeAttribute.h"
#include "FBXMarker.h"

using namespace ArcManagedFBX;

ARC_DEFAULT_CONSTRUCTORS_INHERIT_IMPL(FBXMarker,FBXNodeAttribute)

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXMarker,FBXNodeAttribute,FbxMarker)

float64 ArcManagedFBX::FBXMarker::GetDefaultOcclusion()
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");

	return this->GetFBXMarker()->GetDefaultOcclusion();
}

float64 ArcManagedFBX::FBXMarker::GetDefaultIKReachTranslation()
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");

	return this->GetFBXMarker()->GetDefaultIKReachTranslation();
}

void ArcManagedFBX::FBXMarker::SetDefaultIKReachTranslation(float64 ikReachTranslation)
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");

	this->GetFBXMarker()->SetDefaultIKReachTranslation(ikReachTranslation);
}

float64 ArcManagedFBX::FBXMarker::GetDefaultIKReachRotation()
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");

	return this->GetFBXMarker()->GetDefaultIKReachRotation();
}

void ArcManagedFBX::FBXMarker::SetDefaultIKReachRotation(float64 pIKReachRotation)
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");

	this->GetFBXMarker()->SetDefaultIKReachRotation(pIKReachRotation);
}

float64 ArcManagedFBX::FBXMarker::GetDefaultIKPull()
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");

	return this->GetFBXMarker()->GetDefaultIKPull();
}

void ArcManagedFBX::FBXMarker::SetDefaultIKPull(float64 pIKPull)
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");

	this->GetFBXMarker()->SetDefaultIKPull(pIKPull);
}

float64 ArcManagedFBX::FBXMarker::GetDefaultIKPullHips()
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");
	return this->GetFBXMarker()->GetDefaultIKPullHips();
}

void ArcManagedFBX::FBXMarker::SetDefaultIKPullHips(float64 pIKPullHips)
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");
	this->GetFBXMarker()->SetDefaultIKPullHips(pIKPullHips);
}

ArcManagedFBX::Types::EMarkerType ArcManagedFBX::FBXMarker::GetType()
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");
	return (EMarkerType)this->GetFBXMarker()->GetType();
}

void ArcManagedFBX::FBXMarker::SetType(EMarkerType type)
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");
	this->GetFBXMarker()->SetType((FbxMarker::EType)type);
}

void ArcManagedFBX::FBXMarker::SetDefaultOcclusion(float64 occlusion)
{
	ARC_CHECK_AND_THROW(this->GetFBXMarker() == nullptr, "The FBX marker native instance was not defined. Check and try again.");
	this->GetFBXMarker()->SetDefaultOcclusion(occlusion);
}
