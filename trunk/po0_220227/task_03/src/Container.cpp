#include "Container.h"
#include "Number.h"
#include "Integer.h"
#include "Real.h"
#include "Complex.h"
#include <iostream>
#include <memory>

void Container::Add(Number* _number)
{
	auto newNumber = std::make_unique<Item>(_number);
	
	if (begin == nullptr)
	{
		begin = newNumber.get();
	}
	newNumber->next = nullptr;
	if (last != nullptr)
	{
		last->next = newNumber.get();
	}
	last = newNumber.get();

	newNumber.release();
	size++;
}

int Container::Size() const
{
	return size;
}

void Container::PrintAll() const
{
	Item* ptr = begin;
	for (int i = 0; i < size; i++)
	{
		ptr->number->Print();
		std::cout << std::endl;
		ptr = ptr->next;
	}
}

Number* Container::operator[](const int index)
{
	try {
		if (index < 0 || index >= size)
			throw  std::string{ "your index is out of range\nReturn empty element" };
		Item* ptr = begin;
		for (int i = 0; i < index; i++)
		{
			ptr = ptr->next;
		}
		return ptr->number;
	}
	catch (const std::string& error_message)
	{
		std::cout << error_message << std::endl;
		return nullptr;
	}
}
