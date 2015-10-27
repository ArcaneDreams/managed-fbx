#include "Stdafx.h"
#include "FBXLayer.h"

using namespace ArcManagedFBX;

FBXLayer::FBXLayer() : m_NativeInstance(0)
{
}

FBXLayer::~FBXLayer()
{

}

FBXLayer::!FBXLayer()
{

}

FBXLayer::FBXLayer(FbxLayer* instance)
{
	m_NativeInstance = instance;
}