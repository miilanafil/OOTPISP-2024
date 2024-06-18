#include "Real.h"
#include <iostream>

Real::Real(const float _value) : value(_value)
{
}

void Real::SetValue(const float _value)
{
	value = _value;
}

float Real::GetValue() const
{
	return value;
}

void Real::Print() const
{
	std::cout << "Value: " << value << std::endl;
}

bool Real::operator == (const Real& other) const
{
	if (this->value == other.value)
		return true;
	return false;
}