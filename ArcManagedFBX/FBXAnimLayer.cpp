#include "Stdafx.h"
#include "FBXAnimLayer.h"

using namespace std;
using namespace System;
using namespace System::Text;

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Layers;

FBXAnimLayer::FBXAnimLayer()
{

}

FBXAnimLayer::~FBXAnimLayer()
{

}


FBXAnimLayer::FBXAnimLayer(FbxAnimLayer* instance)
{
	this->m_NativeObject = instance;
}

FBXAnimLayer::!FBXAnimLayer()
{

}