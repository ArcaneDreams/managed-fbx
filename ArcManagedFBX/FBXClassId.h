#ifndef FBXClassId_h__
#define FBXClassId_h__

#pragma once

namespace ArcManagedFBX
{
	// Delegate definition required for the constructor
	delegate void FbxObjectCreateProcManaged(FBXManager^ manager, String^ name, FBXObject^ from);

	// The managed representation of a class ID
	public ref class FBXClassId
	{
	public:
		FBXClassId();

		FBXClassId(String^ className, FBXClassId^ parentClassId);

		void Destroy();

		const String^ GetName();
		
		bool Is(const FBXClassId^ other);
		
		bool operator==(const FBXClassId^ other);
		
		bool operator!=(const FBXClassId^ other);

		const String^ GetFbxFileTypeName(bool bAskParent);

		const String^ GetFbxFileSubTypeName();

		const String^ GetObjectTypePrefix();

		const int32 ClassInstanceIncRef();
		
		const int32 ClassInstanceDecRef();
		
		const int32 GetInstanceRef();
	private:
		FbxClassId* m_NativeInstance;

	protected:

	internal:
		FBXClassId(FbxClassId* instance);

		// Return the native instance of the fbx class iD
		ARC_FORCEINLINE FbxClassId* GetFbxClassId()
		{
			return m_NativeInstance;
		}
	};
}
#endif // FBXClassId_h__