#include "Detail.h"
#include <iostream>


Detail::Detail(const std::string_view _name, const bool _is_metal) : name(_name), is_metal(_is_metal)
{
	this->Add();
}

void Detail::Add()
{
	if (begin == nullptr)
	{
		begin = this;
	}
	next = nullptr;
	if (last != nullptr)
	{
		last->SetNext(this);
	}
	last = this;
}

void Detail::SetNext(Detail* nextDetail)
{
	next = nextDetail;
}

void Detail::Print() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Detail ";
	if (is_metal)
	{
		std::cout << "metal";
	}
	else
	{
		std::cout << "not metal";
	}
	std::cout << std::endl;
}

void Detail::ShowDetails()
{
	Detail* ptr = begin;
	while (ptr != nullptr)
	{
		ptr->Print();
		std::cout << std::endl;
		ptr = ptr->next;
	}
}

bool Detail::GetMaterial() const
{
	return is_metal;
}

void Detail::SetMaterial(const bool _is_metal)
{
	is_metal = _is_metal;
}

std::string Detail::GetName() const
{
	return name;
}

void Detail::SetName(const std::string_view _name)
{
	name = _name;
}

Detail* Detail::begin = nullptr;
Detail* Detail::last = nullptr;