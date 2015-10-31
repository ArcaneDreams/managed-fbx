#pragma once
#ifndef FBXMarker_h__
#define FBXMarker_h__

namespace ArcManagedFBX
{
	public ref class FBXMarker : FBXNodeAttribute
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXMarker)

		void SetType(EMarkerType type);

		EMarkerType GetType();

		float64 GetDefaultOcclusion();

		void SetDefaultOcclusion(float64 occlusion);

		float64 GetDefaultIKReachTranslation();

		void SetDefaultIKReachTranslation(float64 ikReachTranslation);

		float64 GetDefaultIKReachRotation();

		void SetDefaultIKReachRotation(float64 pIKReachRotation);

		float64 GetDefaultIKPull();

		void SetDefaultIKPull(float64 pIKPull);

		float64 GetDefaultIKPullHips();

		void SetDefaultIKPullHips(float64 pIKPullHips);
	private:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXMarker,FbxMarker)

		ARC_CHILD_CAST(NativeObject,FbxMarker,FBXMarker)
	};
}

#endif // FBXMarker_h__