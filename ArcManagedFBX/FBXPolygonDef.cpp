#include "Stdafx.h"
#include "FBXPolygonDef.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace ArcManagedFBX::Types;

FBXPolygonDef::FBXPolygonDef()
{

}

FBXPolygonDef::!FBXPolygonDef()
{

}

FBXPolygonDef::~FBXPolygonDef()
{
	// Call the finalizer from the destructor
	this->!FBXPolygonDef();
}

FBXPolygonDef::FBXPolygonDef(FbxMesh::PolygonDef* instance)
{
	this->m_Instance = instance;
}

int32 FBXPolygonDef::Size::get()
{
	return this->m_Instance->mSize;
}

void FBXPolygonDef::Size::set(int32 value)
{
	this->m_Instance->mSize = value;
}

int32 FBXPolygonDef::Group::get()
{
	return this->m_Instance->mGroup;
}

void FBXPolygonDef::Group::set(int32 value)
{
	this->m_Instance->mGroup = value;
}

int32 FBXPolygonDef::Index::get()
{
	return this->m_Instance->mIndex;
}

void FBXPolygonDef::Index::set(int32 value)
{
	this->m_Instance->mIndex = value;
}