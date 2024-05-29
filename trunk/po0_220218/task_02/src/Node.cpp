#include "Node.h"
#include <iostream>

Node::Node(const int _amount_of_parts, const bool _isCollapsable, const std::string_view _name, const bool _is_metal) : Detail(_name, _is_metal), isCollapsable(_isCollapsable), amount_of_parts(_amount_of_parts)
{
	this->Add();
}

void Node::Print() const
{
	Detail::Print();
	std::cout << "Node type: ";
	if (isCollapsable)
	{
		std::cout << "collapsable";
	}
	else
	{
		std::cout << "non-collapsable";
	}
	std::cout << std::endl;
	std::cout << "Amount of parts: " << amount_of_parts << std::endl;
}

void Node::SetIsCollapsable(const bool _isCollapsable)
{
	isCollapsable = _isCollapsable;
}

bool Node::GetIsCollapsable() const
{
	return isCollapsable;
}

void Node::SetAmountOfParts(const int _amount_of_parts)
{
	amount_of_parts = _amount_of_parts;
}

int Node::GetAmountOfParts() const
{
	return amount_of_parts;
}
