#pragma once

using namespace System;
using namespace System::Text;
using namespace System::Text::RegularExpressions;

namespace ArcManagedFBX
{
	public ref class FBXEmitter
	{
	public:
		FBXEmitter();
		!FBXEmitter();
		virtual ~FBXEmitter();

	internal:
		FBXEmitter(FbxEmitter* instance);
	private:

	protected:
		FbxEmitter* m_NativeEmitter;

	internal:
	};
}