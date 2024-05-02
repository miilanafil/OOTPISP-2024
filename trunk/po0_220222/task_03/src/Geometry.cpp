#include "Geometry.h"
#include <iostream>

Geometry::Geometry(const float _area, const float _perimeter):area(_area), perimeter(_perimeter)
{

}

void Geometry::SetArea(const float _area)
{
	area = _area;
}

float Geometry::GetArea() const
{
	return area;
}

void Geometry::SetPerimeter(const float _perimeter)
{
	perimeter = _perimeter;
}

float Geometry::GetPerimeter() const
{
	return perimeter;
}

void Geometry::CountArea() 
{
	this->SetArea(0.00);
}

void Geometry::CountPerimeter()
{
	this->SetPerimeter(0.00);
}

void Geometry::Print() const
{
	std::cout << "Perimeter: " << perimeter << std::endl;
	std::cout << "Area: " << area << std::endl;

}


bool Geometry::operator==(const Geometry &right) const
{
	if (this->area == right.area && this->perimeter == right.perimeter)
		return true;
	else return false;
}
