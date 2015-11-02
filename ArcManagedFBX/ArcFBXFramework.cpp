#include "Stdafx.h"
#include "ArcFBXFramework.h"

ArcManagedFBX::Framework::ArcFBXFramework::ArcFBXFramework()
{

}

ArcManagedFBX::Framework::ArcFBXFramework::ArcFBXFramework(String^ fileName)
{
	if (!String::IsNullOrEmpty(fileName))
		this->m_Filename = fileName;
}

ArcManagedFBX::Framework::ArcFBXFramework::~ArcFBXFramework()
{

}

ArcManagedFBX::Framework::ArcFBXFramework::!ArcFBXFramework()
{

}

void ArcManagedFBX::Framework::ArcFBXFramework::Initialize()
{
	if (!String::IsNullOrEmpty(m_Filename))
	{

	}
}

void ArcManagedFBX::Framework::ArcFBXFramework::LoadFile(String^ fileName)
{

}

void ArcManagedFBX::Framework::ArcFBXFramework::Destroy()
{

}
