#include "Transport.h"

Transport::Transport(const std::string &_manufacturer, const int _age) : manufacturer(_manufacturer), age(_age)
{

}

void Transport::Show() const 
{
	std::cout << std::endl;
	std::cout << "Manufacturer: "  << manufacturer  << std::endl;
	std::cout << "Age: " <<  age << std::endl;
}


bool Transport::operator==(const Transport& right) const
{
	if (this->manufacturer == right.manufacturer && this->age == right.age)
		return true;
	else return false;
}