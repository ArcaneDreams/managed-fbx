#pragma once

using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	public ref class FBXStatus
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXStatus)

		void SetCode(EStatusCode code);
		
		String^ GetErrorString();
		
		void Clear();
		
		EStatusCode GetCode();
		
		bool Error();

		bool operator==(FBXStatus^ rhs);

	internal:
		FBXStatus(FbxStatus* instance);
		FbxStatus* GetInstance();

	private:
		FbxStatus* m_Instance;

	};
}