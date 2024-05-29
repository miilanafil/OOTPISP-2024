#include "Mechanism.h"
#include <iostream>

Mechanism::Mechanism(const std::string_view _purpose, const int _amount_of_parts, const bool _isCollapsable, const std::string_view _name, const bool _is_metal) : Node(_amount_of_parts, _isCollapsable, _name, _is_metal), purpose(_purpose)
{
	this->Add();
}

void Mechanism::Print() const
{
	Node::Print();
	std::cout << "Purpose: " << purpose << std::endl;
}

void Mechanism::SetPurpose(const std::string_view _purpose)
{
	purpose = _purpose;
}

std::string Mechanism::GetPurpose() const
{
	return purpose;
}
