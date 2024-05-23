#pragma once
#include "Car.h"
class Truck : public Car
{

public:
	Truck() = default;
	Truck(const std::string &_manufacturer, const int _age, const int _numSeats, int _cargoCapacity);
	Truck(const Truck& other) = delete;
	~Truck() override = default;
	void Show() const override;

	Truck& operator=(const Truck& right) = default;
	bool operator==(const Truck& right) const;

private:	
	int cargoCapacity;
};

