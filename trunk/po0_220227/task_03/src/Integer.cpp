#include "Integer.h"
#include "iostream"

Integer::Integer(const int _value) : value(_value)
{
}

void Integer::SetValue(const int _value)
{
	value = _value;
}

int Integer::GetValue() const
{
	return value;
}

void Integer::Print() const
{
	std::cout << "Value: " << value << std::endl;
}

bool Integer::operator == (const Integer& other) const
{
	if (this->value == other.value)
		return true;
	return false;
}