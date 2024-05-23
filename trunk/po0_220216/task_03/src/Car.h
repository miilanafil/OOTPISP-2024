#pragma once
#include "Transport.h"
#include<string>
class Car : public Transport
{
public:
	Car() = default;
	Car(const std::string &_manufacturer, const int _age, const int _numSeats);
	Car(const Car& other) = delete;
	~Car() override = default;
	void Show() const override;

	Car& operator=(const Car& right) = default;
	bool operator==(const Car& right) const;



private:
	int numSeats;
};

