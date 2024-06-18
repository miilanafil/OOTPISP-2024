#include "Complex.h"
#include <iostream>

Complex::Complex(const float _realPart, const float _imaginaryPart) : realPart(_realPart), imaginaryPart(_imaginaryPart)
{
}

void Complex::SetRealPart(const float _realPart)
{
	realPart = _realPart;
}

float Complex::GetRealPart() const
{
	return realPart;
}

void Complex::SetImaginaryPart(const float _imaginaryPart)
{
	imaginaryPart = _imaginaryPart;
}

float Complex::GetImaginaryPart() const
{ 
	return imaginaryPart;
}

void Complex::Print() const
{ 
	std::cout << "(" << realPart << ")+(" << imaginaryPart << ")i" << std::endl;
}

bool Complex::operator == (const Complex& other) const
{
	if (this->realPart == other.realPart && this->imaginaryPart == other.imaginaryPart)
		return true;
	return false;
}