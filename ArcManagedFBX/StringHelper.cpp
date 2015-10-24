#include "Stdafx.h"
#include "StringHelper.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Utility;
using namespace System;
using namespace System::Text;
using namespace System::Runtime;
using namespace System::Runtime::InteropServices;

using namespace std;

using namespace msclr::interop;

// The helper methods to be used for generating a string into both environments.
String^ StringHelper::ToManaged(const char* input)
{
	InitContext();

	// The strangest casting that I have ever had to do in order to get it working
	return Marshal::PtrToStringAnsi((IntPtr)(void*)input,(int32)strlen(input));
}

void StringHelper::InitContext()
{
	if (!CONTEXT)
	{
		CONTEXT = gcnew marshal_context();
	}
}

const char* StringHelper::ToNative(String^ input)
{
	InitContext();

	return StringHelper::CONTEXT->marshal_as<const char*>(input);
}


