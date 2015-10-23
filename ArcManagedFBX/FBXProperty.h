#pragma once

namespace ArcManagedFBX
{
	public ref class FBXProperty
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXProperty)

		void Destroy();
		
		void DestroyRecursively();
		
		void DestroyChildren();

		// Converts from FbxString
		String^ GetName();

		String^ GetHierarchicalName();

		String^ GetLabel(bool pReturnNameIfEmpty);

		void SetLabel(String^ pLabel);

		FBXObject^ GetFbxObject();

		void SetUserTag(int pTag);

		int GetUserTag();

	private:
		FbxProperty* m_NativeInstance;

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXProperty,FbxProperty)

		void* GetUserDataPtr();

		void SetUserDataPtr(void* pUserData);
	};
}