#include "Stdafx.h"
#include "FBXDeformer.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;

FBXDeformer::FBXDeformer()
{

}

FBXDeformer::~FBXDeformer()
{

}

FBXDeformer::!FBXDeformer()
{

}

FBXDeformer::FBXDeformer(FbxDeformer* instance)
{
	this->m_NativeObject = instance;
}

ArcManagedFBX::Types::DeformerType ArcManagedFBX::FBXDeformer::GetDeformerType()
{
	return (DeformerType)this->GetFBXDeformer()->GetDeformerType();
}
