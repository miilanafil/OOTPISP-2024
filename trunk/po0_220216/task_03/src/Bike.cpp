#include "Bike.h"

Bike::Bike(const std::string &_manufacturer, const int _age, const int _numGears)
	: Transport(_manufacturer, _age), numGears(_numGears)
{

}

void Bike::Show() const
{
	std::cout << std::endl;
	Transport::Show();
	std::cout << "Num gears: "  << numGears  << std::endl;
}

bool Bike::operator==(const Bike& right) const
{
	if (this->numGears == right.numGears)
		return true;
	else return false;
}