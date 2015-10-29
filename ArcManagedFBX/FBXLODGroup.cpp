#include "Stdafx.h"
#include "FBXNode.h"
#include "FBXLODGroup.h"

using namespace ArcManagedFBX;

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXLODGroup)

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXLODGroup,FBXNodeAttribute,FbxLODGroup)

float64 FBXLODGroup::MinDistance::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXLODGroup() == nullptr, "The FBX LOD Group instance does not exist.")

	return this->GetFBXLODGroup()->MinDistance.Get();
}

float64 FBXLODGroup::MinMaxDistance::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXLODGroup() == nullptr, "The FBX LOD Group instance does not exist.")

	return this->GetFBXLODGroup()->MinMaxDistance.Get();
}

bool FBXLODGroup::WorldSpace::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXLODGroup() == nullptr, "The FBX LOD Group instance does not exist.")

	return this->GetFBXLODGroup()->WorldSpace.Get();
}

float64 FBXLODGroup::MaxDistance::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXLODGroup() == nullptr, "The FBX LOD Group instance does not exist.")

	return this->GetFBXLODGroup()->MaxDistance.Get();
}

int32 ArcManagedFBX::FBXLODGroup::GetNumThresholds()
{
	ARC_CHECK_AND_THROW(this->GetFBXLODGroup() == nullptr, "The FBX LOD Group instance does not exist.")

	return this->GetFBXLODGroup()->GetNumThresholds();
}

int32 ArcManagedFBX::FBXLODGroup::GetNumDisplayLevels()
{
	ARC_CHECK_AND_THROW(this->GetFBXLODGroup() == nullptr, "")

	return this->GetFBXLODGroup()->GetNumDisplayLevels();
}
