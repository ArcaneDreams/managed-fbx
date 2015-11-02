#pragma once
#ifndef FBXThumbnail_h__
#define FBXThumbnail_h__

#include "FBXObject.h"

using namespace ArcManagedFBX::Types;
using namespace ArcManagedFBX::Utility;

namespace ArcManagedFBX
{
	public ref class FBXThumbnail : public FBXObject
	{
	public:
			ARC_DEFAULT_CONSTRUCTORS(FBXThumbnail)
			ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXThumbnail,FbxThumbnail)
			ARC_CHILD_CAST(NativeObject,FbxThumbnail,FBXThumbnail)

			uint64 GetSizeInBytes();

			void SetSize(EImageSize imageSize);

			bool SetThumbnailImage(array<byte>^ imageData);

			ARC_PROPERTY_FBXPROPERTY_PUBLICGET(int32,CustomHeight)
			ARC_PROPERTY_FBXPROPERTY_PUBLICGET(int32,CustomWidth)
	private:
		
	};
}
#endif // FBXThumbnail_h__