#include "Good.h"
Good::Good(const int _price, const std::string_view _name, const bool _is_metal) : Detail(_name, _is_metal), price(_price)
{
	this->Add();
}

void Good::Print() const
{
	Detail::Print();
	std::cout << "Price: " << price << std::endl;
}

int Good::GetPrice() const
{
	return price;
}

void Good::SetPrice(const int _price)
{
	price = _price;
}
