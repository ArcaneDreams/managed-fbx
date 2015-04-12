#pragma once

using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	public ref class FBXLayerElement
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXLayerElement)

		void SetMappingMode(MappingMode mode);

		MappingMode GetMappingMode();

		static array<String^>^ sTextureChannelNames;
		static array<String^>^ sTextureUVNames;
		static array<String^>^ sNonTextureNames;
	private:

	};
}