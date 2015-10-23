#pragma once
#ifndef FBXSkin_h__
#define FBXSkin_h__

namespace ArcManagedFBX
{
	public ref class FBXSkin : public FBXDeformer
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXSkin)
	
		int32 GetControlPointIndicesCount();
		array<int32>^ GetControlPointIndices();

		void SetControlPointIWCount(int32 pCount);
		void AddControlPointIndex(int32 index, double blendWeight);

		int32 GetClusterCount();


	private:
		
	internal:
		ARC_CHILD_CAST(NativeObject,FbxSkin,FBXSkin)
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXSkin,FbxSkin)
	};
}
#endif // FBXSkin_h__