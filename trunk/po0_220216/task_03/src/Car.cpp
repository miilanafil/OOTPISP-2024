#include "Car.h"


Car::Car(const std::string &_manufacturer, const int _age, const int _numSeats)
	: Transport(_manufacturer, _age), numSeats(_numSeats)
{

}

void Car::Show() const
{
	std::cout << std::endl;
	Transport::Show();
	std::cout << "Num gears: "  << numSeats  << std::endl;
}

bool Car::operator==(const Car& right) const
{
	if (this->numSeats == right.numSeats)
		return true;
	else return false;
}