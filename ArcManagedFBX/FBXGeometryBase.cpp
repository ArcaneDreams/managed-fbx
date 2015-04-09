#include "Stdafx.h"
#include "FBXGeometryBase.h"

using namespace ArcManagedFBX;

FBXGeometryBase::FBXGeometryBase()
{

}

FBXGeometryBase::!FBXGeometryBase()
{

}

FBXGeometryBase::~FBXGeometryBase()
{

}

FBXGeometryBase::FBXGeometryBase(FbxGeometryBase* instance)
{
	this->m_NativeObject = instance;
}

void ArcManagedFBX::FBXGeometryBase::GetElementUV(String^ name)
{

}

void ArcManagedFBX::FBXGeometryBase::InitBinormals(int32 count, const int layerindex, String^ name)
{

}

void ArcManagedFBX::FBXGeometryBase::InitTangents(FBXGeometryBase^ source, const int32 layerindex)
{

}

void ArcManagedFBX::FBXGeometryBase::InitNormals(int32 count)
{

}

void ArcManagedFBX::FBXGeometryBase::SetControlPoint(const FBXVector^ controlPoint, const FBXVector^ normal)
{

}
