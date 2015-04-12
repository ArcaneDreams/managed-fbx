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


ArcManagedFBX::Types::MappingMode ArcManagedFBX::FBXLayerElement::GetMappingMode()
{
	return MappingMode::eAllSame;
}

void ArcManagedFBX::FBXLayerElement::SetMappingMode(MappingMode mode)
{

}
