#include "Stdafx.h"
#include "FBXStatus.h"
#include "FBXGeometryBase.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Exceptions;

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

FBXVector FBXGeometryBase::BBoxMax::get()
{
	return FBXVector();
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

void ArcManagedFBX::FBXGeometryBase::InitTangents(int32 count, int32 layerindex, String^ name)
{
	this->GetFBXGeometryBase()->InitTangents(count,layerindex,StringHelper::ToNative(name));
}

void ArcManagedFBX::FBXGeometryBase::InitNormals(int32 count)
{
	this->GetFBXGeometryBase()->InitNormals(count);
}

void ArcManagedFBX::FBXGeometryBase::InitNormals(FBXGeometryBase^ source)
{
	
}

void ArcManagedFBX::FBXGeometryBase::SetControlPoint(const FBXVector^ controlPoint, const FBXVector^ normal)
{
	
}

ArcManagedFBX::FBXVector ArcManagedFBX::FBXGeometryBase::GetControlPointAt(int32 index)
{

}

int32 ArcManagedFBX::FBXGeometryBase::GetControlPointsCount()
{
	return this->GetFBXGeometryBase()->GetControlPointsCount();
}

void ArcManagedFBX::FBXGeometryBase::ComputeBBox()
{
	this->GetFBXGeometryBase()->ComputeBBox();
}

array<FBXVector^>^ ArcManagedFBX::FBXGeometryBase::GetControlPoints(FBXStatus^ status)
{
	array<FBXVector^>^ outputVectors = gcnew array<FBXVector^>(2);

	return outputVectors;
}

void ArcManagedFBX::FBXGeometryBase::InitControlPoints(int32 count)
{
	this->GetFBXGeometryBase()->InitControlPoints(count);
}
