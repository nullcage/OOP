#include "Auto.h"
#include <iostream>

std::ostream& operator<< (std::ostream& out, const Auto& car)
{
	out << car.m_ownerName << " (машина: " << car.m_autoName << ')';
	return out;
}