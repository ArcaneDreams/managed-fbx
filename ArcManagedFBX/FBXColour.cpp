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

float64 FBXColour::R::get()
{
	return this->m_r;
}

float64 FBXColour::G::get()
{
	return this->m_g;
}

float64 FBXColour::B::get()
{
	return this->m_b;
}

float64 FBXColour::A::get()
{
	return this->m_a;
}
