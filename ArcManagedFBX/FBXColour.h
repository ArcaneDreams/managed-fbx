#pragma once

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public value struct FBXColour
	{
	public:
		FBXColour(float64 r,float64 g,float64 b,float64 a);

		// Override the method for writing out the string to the console
		virtual String^ ToString() override
		{
			return "";
		}
	private:
		float64 m_r;
		float64 m_g;
		float64 m_b;
		float64 m_a;
	};
}