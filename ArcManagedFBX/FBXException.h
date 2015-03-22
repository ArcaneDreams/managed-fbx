#pragma once

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	namespace Exceptions
	{
		public ref class FBXException : public Exception
		{
		public:
			FBXException(String^ message, ...array<Object^> ^ args) : Exception(System::String::Format(message,args))
			{

			}
		private:

		internal:
		};
	}
}