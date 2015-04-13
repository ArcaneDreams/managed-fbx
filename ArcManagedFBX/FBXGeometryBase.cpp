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

FBXVector FBXGeometryBase::BBoxMin::get()
{
	return FBXVector();
}

bool FBXGeometryBase::PrimaryVisibility::get()
{
	return this->GetFBXGeometryBase()->PrimaryVisibility.Get();
}

bool FBXGeometryBase::ReceiveShadow::get()
{
	return this->GetFBXGeometryBase()->ReceiveShadow.Get();
}

bool FBXGeometryBase::CastShadow::get()
{
	return this->GetFBXGeometryBase()->CastShadow.Get();
}

void ArcManagedFBX::FBXGeometryBase::InitBinormals(int32 count, const int32 layerindex, String^ name)
{
	const char* nativeName = StringHelper::ToNative(name);
	this->GetFBXGeometryBase()->InitBinormals(count,layerindex,nativeName);
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
	this->GetFBXGeometryBase()->InitNormals(source->GetFBXGeometryBase());
}

void ArcManagedFBX::FBXGeometryBase::SetControlPoint(const FBXVector^ controlPoint, const FBXVector^ normal)
{
	
}

ArcManagedFBX::FBXVector ArcManagedFBX::FBXGeometryBase::GetControlPointAt(int32 index)
{
	return FBXVector();
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
	// Retrieve the total count of control points that exist.
	int32 controlPointsCount  = this->GetFBXGeometryBase()->GetControlPointsCount();
	array<FBXVector^>^ outputVectors = gcnew array<FBXVector^>(controlPointsCount);

	FbxVector4* controlPointsHandle = this->GetFBXGeometryBase()->GetControlPoints(status->GetInstance());

	// Iterate over the control points and store them into the output vectors
	for(uint32 i = 0; i < controlPointsCount; i++)
	{
		outputVectors[i] = FBXVector::ConvertVector4(&controlPointsHandle[i]);
	}

	return outputVectors;
}

void ArcManagedFBX::FBXGeometryBase::InitControlPoints(int32 count)
{
	this->GetFBXGeometryBase()->InitControlPoints(count);
}

void ArcManagedFBX::FBXGeometryBase::SetControlPointAt(FBXVector^ controlPoint, int32 index)
{
	FbxVector4 generatedVector = controlPoint->GenerateVector4();
	this->GetFBXGeometryBase()->SetControlPointAt(generatedVector,index);
}

int32 ArcManagedFBX::FBXGeometryBase::GetElementVertexColorCount()
{
	return this->GetFBXGeometryBase()->GetElementVertexColorCount();
}

void ArcManagedFBX::FBXGeometryBase::SetControlPointCount(int32 count)
{
	this->GetFBXGeometryBase()->SetControlPointCount(count);
}
