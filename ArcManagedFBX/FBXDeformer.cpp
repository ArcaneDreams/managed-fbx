#include "Stdafx.h"
#include "FBXDeformer.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXDeformer)

FBXDeformer::FBXDeformer(FbxDeformer* instance) : FBXObject(instance)
{
}

ArcManagedFBX::Types::EDeformerType ArcManagedFBX::FBXDeformer::GetDeformerType()
{
	return (EDeformerType)this->GetFBXDeformer()->GetDeformerType();
}
