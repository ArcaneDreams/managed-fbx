#include "Stdafx.h"
#include "FBXAnimLayer.h"

using namespace std;
using namespace System;
using namespace System::Text;

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Layers;

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXAnimLayer)

bool FBXAnimLayer::Mute::get()
{
	return this->GetFBXAnimLayer()->Mute.Get();
}

bool FBXAnimLayer::Lock::get()
{
	return this->GetFBXAnimLayer()->Lock.Get();
}

float64 FBXAnimLayer::Weight::get()
{
	return this->GetFBXAnimLayer()->Weight.Get();
}

bool FBXAnimLayer::Solo::get()
{
	return this->GetFBXAnimLayer()->Solo.Get();
}

// Properties
FBXColour FBXAnimLayer::Color::get()
{
	return FBXColour(this->GetFBXAnimLayer()->Color.Get().mData[0],this->GetFBXAnimLayer()->Color.Get().mData[1],this->GetFBXAnimLayer()->Color.Get().mData[2],this->GetFBXAnimLayer()->Color.Get().mData[3]);
}

FBXAnimLayer::FBXAnimLayer(FbxAnimLayer* instance)
{
	this->m_NativeObject = instance;
}

void FBXAnimLayer::Reset()
{

}
