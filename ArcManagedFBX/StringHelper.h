#pragma once
#include <msclr\marshal.h>

using namespace msclr::interop;

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	namespace Utility
	{
		// The string helper class that is to be used
		public ref class StringHelper
		{
		public:
			static const char* ToNative(String^ input);
			static String^ ToManaged(const char* input);

			static void InitContext();
		private:
			static marshal_context^ CONTEXT;
		};
	}
}