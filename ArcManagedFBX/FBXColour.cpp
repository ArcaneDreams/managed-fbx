#include "Stdafx.h"
#include "FBXColour.h"

using namespace ArcManagedFBX;
using namespace System;
using namespace System::Text;

FBXColour::FBXColour(float64 r,float64 g,float64 b,float64 a)
{
	this->m_r = r;
	this->m_g = g;
	this->m_b = b;
	this->m_a = a;
}