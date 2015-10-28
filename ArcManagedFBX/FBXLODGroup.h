#pragma once
#ifndef FBXLODGroup_h__
#define FBXLODGroup_h__

namespace ArcManagedFBX
{
	// Defines the lod group within the SDK
	public ref class FBXLODGroup : public FBXNodeAttribute
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXLODGroup)

		ARC_PROPERTY_PUBLICGET(float64,MinMaxDistance)

		ARC_PROPERTY_PUBLICGET(float64,MinDistance)

		ARC_PROPERTY_PUBLICGET(float64,MaxDistance)

		ARC_PROPERTY_PUBLICGET(bool,WorldSpace)

		int32 GetNumThresholds();

		int32 GetNumDisplayLevels();
	private:

	internal:
		ARC_CHILD_CAST(NativeObject,FbxLODGroup,FBXLODGroup)
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXLODGroup,FbxLODGroup)
	};
}
#endif // FBXLODGroup_h__