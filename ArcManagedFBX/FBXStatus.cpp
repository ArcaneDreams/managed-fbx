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

void ArcManagedFBX::FBXStatus::SetCode(EStatusCode code)
{
	FbxStatus::EStatusCode errorCode = (FbxStatus::EStatusCode)code;

	this->m_Instance->SetCode(errorCode);
}

bool ArcManagedFBX::FBXStatus::Error()
{
	return this->m_Instance->Error();
}

void ArcManagedFBX::FBXStatus::Clear()
{
	this->m_Instance->Clear();
}

String^ ArcManagedFBX::FBXStatus::GetErrorString()
{
	String^ output = StringHelper::ToManaged(this->m_Instance->GetErrorString());

	return output;
}

ArcManagedFBX::Types::EStatusCode ArcManagedFBX::FBXStatus::GetCode()
{
	return (EStatusCode)this->m_Instance->GetCode();
}

FbxStatus* ArcManagedFBX::FBXStatus::GetInstance()
{
	return this->m_Instance;
}

bool ArcManagedFBX::FBXStatus::operator==(FBXStatus^ rhs)
{
	return *m_Instance == *(rhs->GetInstance());
}
