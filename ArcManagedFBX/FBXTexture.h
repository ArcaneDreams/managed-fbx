#pragma once


namespace ArcManagedFBX
{
	public ref class FBXTexture : public FBXObject
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXTexture)

	private:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXTexture,FbxTexture)

	};
}