#include "Triangle.h"
#include <math.h>
#include <iostream>

Triangle::Triangle(const float a, const float b, const float c) : a(a), b(b), c(c)
{
	
}

void Triangle::SetA(const float _a)
{
	a = _a;
	CountArea();
	CountPerimeter();
}

float Triangle::GetA() const
{
	return a;
}

void Triangle::SetB(const float _b)
{
	b = _b;
	CountArea();
	CountPerimeter();
}

float Triangle::GetB() const
{
	return b;
}

void Triangle::SetC(const float _c)
{
	c = _c;
	CountArea();
	CountPerimeter();
}

float Triangle::GetC() const
{
	return c;
}

void Triangle::CountArea()
{
	this->CountPerimeter();
	this->SetArea(sqrt(GetPerimeter() / 2 * (GetPerimeter() / 2 - a) * (GetPerimeter() / 2 - b) * (GetPerimeter() / 2 - c)));
}

void Triangle::CountPerimeter()
{
	this->SetPerimeter(a + b + c);
}

void Triangle::Print() const
{
	std::cout << "<Triangle>" << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;
	std::cout << "C: " << c << std::endl;
	Geometry::Print();
}


bool Triangle::operator==(const Triangle &right) const
{
	if (this->GetArea() == right.GetArea() && this->GetPerimeter() == right.GetPerimeter())
		return true;
	else
		return false;
}

