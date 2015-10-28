#include "Stdafx.h"
#include "FBXBoundary.h"

using namespace ArcManagedFBX;

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXBoundary,FBXGeometry,FbxBoundary)
ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXBoundary)

void ArcManagedFBX::FBXBoundary::ClearCurves()
{

}

bool ArcManagedFBX::FBXBoundary::IsValid([Optional] bool mustClosed)
{
	return this->GetFBXBoundary()->IsValid(mustClosed);
}
