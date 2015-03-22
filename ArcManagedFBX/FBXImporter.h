#pragma once

#include "FBXDocument.h"
#include "FBXIOBase.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	namespace IO
	{
		// The FBX importer that we are working with
		public ref class FBXImporter : public FBXIOBase
		{
		public:
			FBXImporter();
			~FBXImporter();
			!FBXImporter();
	
			// Various functions relating to the importer that we are using
			bool Import(FBXDocument^ document, bool nonBlocking);
			float64 GetProgress(String^ status);


		private:

		internal:


		};
	}
}