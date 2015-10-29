#include "Stdafx.h"
#include "FBXLayerElement.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Exceptions;

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXLayerElement)

ArcManagedFBX::Types::EMappingMode ArcManagedFBX::FBXLayerElement::GetMappingMode()
{
	return EMappingMode::eAllSame;
}

void ArcManagedFBX::FBXLayerElement::SetMappingMode(EMappingMode mode)
{

}
