#include "Stdafx.h"
#include "FBXStatus.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Types;

FBXStatus::FBXStatus()
{

}

FBXStatus::FBXStatus(FbxStatus* instance)
{
	this->m_Instance = instance;
}

FBXStatus::!FBXStatus()
{

}

FBXStatus::~FBXStatus()
{

}

void ArcManagedFBX::FBXStatus::SetCode(StatusCode code)
{
	FbxStatus::EStatusCode errorCode = (FbxStatus::EStatusCode)code;

	this->m_Instance->SetCode(errorCode);
}

bool ArcManagedFBX::FBXStatus::Error()
{
	return false;
}

void ArcManagedFBX::FBXStatus::Clear()
{

}

String^ ArcManagedFBX::FBXStatus::GetErrorString()
{
	String^ output = StringHelper::ToManaged(this->m_Instance->GetErrorString());

	return output;
}

ArcManagedFBX::Types::StatusCode ArcManagedFBX::FBXStatus::GetCode()
{
	return (StatusCode)this->m_Instance->GetCode();
}

FbxStatus* ArcManagedFBX::FBXStatus::GetInstance()
{
	return this->m_Instance;
}
