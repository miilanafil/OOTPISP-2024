#include "Container.h"
#include "Circle.h"
#include "Geometry.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

void Container::ShowAll() const
{
	Container_unit* ptr = begin;
	for (int i = 0; i < _size; i++)
	{
		ptr->geom->Print();
		std::cout << std::endl;
		ptr = ptr->next;
	}
}

void Container::Add(Geometry* _geom)
{
	auto _new = std::make_unique<Container_unit>(_geom);
	if (begin == nullptr)
	{
		begin = _new.get();
	}
	_new->next = nullptr;
	if (last != nullptr)
	{
		last->next = _new.get();
	}
	last = _new.get();

	_new.release();
	_size++;
}

int Container::size() const
{
	return _size;
}

Geometry* Container::operator[](const int index)
{

	try {
		if (index < 0 || index >= _size)
			throw  std::string{ "your index is out of range\nReturn empty element" };
	Container_unit* ptr = begin;
	for (int i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	return ptr->geom;
	}
	catch (const std::string& error_message)
	{
		std::cout << error_message << std::endl;
		Geometry geom;
		return nullptr;
	}
}
