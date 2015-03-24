#pragma once

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	// The colour representation that is to be used
	// around the library
	public value struct FBXColour
	{
	public:
		FBXColour(float64 r,float64 g,float64 b,float64 a);
		virtual String^ ToString() override
		{
			return String::Format("{0}, {1}, {2}",m_r.ToString(),m_g.ToString(),m_b.ToString());
		}
	private:
		float64 m_r;
		float64 m_g;
		float64 m_b;
		float64 m_a;
	};
}