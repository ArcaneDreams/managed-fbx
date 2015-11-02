#include "Stdafx.h"
#include "FBXThumbnail.h"

using namespace ArcManagedFBX;

ARC_DEFAULT_CONSTRUCTORS_INHERIT_IMPL(FBXThumbnail,FBXObject)

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXThumbnail,FBXObject,FbxThumbnail)

ARC_PROPERTY_FBXPROPERTY_PUBLICGET_IMPL(int32,FBXThumbnail,CustomHeight)

ARC_PROPERTY_FBXPROPERTY_PUBLICGET_IMPL(int32,FBXThumbnail,CustomWidth)

uint64 ArcManagedFBX::FBXThumbnail::GetSizeInBytes()
{
	return this->GetFBXThumbnail()->GetSizeInBytes();
}

void ArcManagedFBX::FBXThumbnail::SetSize(EImageSize imageSize)
{
	return this->GetFBXThumbnail()->SetSize((FbxThumbnail::EImageSize)imageSize);
}

bool ArcManagedFBX::FBXThumbnail::SetThumbnailImage(array<byte>^ imageData)
{
	return this->GetFBXThumbnail()->SetThumbnailImage(NULL);
}
