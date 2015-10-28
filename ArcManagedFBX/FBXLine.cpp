#include "Stdafx.h"
#include "FBXLine.h"

using namespace ArcManagedFBX;

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXLine,FBXGeometry,FbxLine)

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXLine)

int32 ArcManagedFBX::FBXLine::GetEndPointAt(int32 endPointIndex)
{
	return this->GetFBXLine()->GetEndPointAt(endPointIndex);
}

bool ArcManagedFBX::FBXLine::AddEndPoint(int32 pointIndex)
{
	return this->GetFBXLine()->AddEndPoint(pointIndex);
}

int32 ArcManagedFBX::FBXLine::GetEndPointCount()
{
	return this->GetFBXLine()->GetEndPointCount();
}

bool ArcManagedFBX::FBXLine::AddPointIndex(int32 value, bool asEndPoint)
{
	return this->GetFBXLine()->AddPointIndex(value,asEndPoint);
}
