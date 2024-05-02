#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const float _length, const float _width) : length(_length), width(_width)
{
	
}

void Rectangle::SetLength(const float _length)
{
	length = _length;
	CountArea();
	CountPerimeter();
}

float Rectangle::GetLength() const
{
	return length;
}

void Rectangle::SetWidth(const float _width)
{
	width = _width;
	CountArea();
	CountPerimeter();
}

float Rectangle::GetWidth() const
{
	return width;
}

void Rectangle::CountArea()
{
	this->SetArea(length * width);
}

void Rectangle::CountPerimeter()
{
	this->SetPerimeter(2 * (length + width));
}

void Rectangle::Print() const
{
	std::cout << "<Rectangle>" << std::endl;
	std::cout << "Length: " << length << std::endl;
	std::cout << "Width: " << width << std::endl;
	Geometry::Print();
}

bool Rectangle::operator==(const Rectangle &right) const
{
	if ((this->length == right.length && this->width == right.width) || (this->width == right.length && this->length == right.width))
		return true;
	else
		return false;
}
