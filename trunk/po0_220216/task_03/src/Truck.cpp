#include "Truck.h"

Truck::Truck(const std::string &_manufacturer, const int _age, const int _numSeats, int _cargoCapaciry)
	: Car(_manufacturer, _age, _numSeats), cargoCapacity(_cargoCapaciry)
{

}

void Truck::Show() const
{
	std::cout << std::endl;
	Car::Show();
	std::cout << "Cargo Capacity: " << cargoCapacity << std::endl;
}

bool Truck::operator==(const Truck& right) const
{
	if (this->cargoCapacity == right.cargoCapacity)
		return true;
	else return false;
}