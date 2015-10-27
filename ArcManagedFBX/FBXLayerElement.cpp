#include "Stdafx.h"
#include "FBXLayerElement.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Exceptions;

FBXLayerElement::FBXLayerElement()
{

}

FBXLayerElement::!FBXLayerElement()
{

}

FBXLayerElement::~FBXLayerElement()
{

}


ArcManagedFBX::Types::EMappingMode ArcManagedFBX::FBXLayerElement::GetMappingMode()
{
	return EMappingMode::eAllSame;
}

void ArcManagedFBX::FBXLayerElement::SetMappingMode(EMappingMode mode)
{

}
