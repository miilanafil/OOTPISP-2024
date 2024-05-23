#pragma once
#include "Transport.h"
#include <string>
class Bike : public Transport
{
public:
	Bike() = default;
	Bike(const std::string &_manufacturer, const int _age, const int _numGears);
	Bike(const Bike& other) = delete;
	~Bike() override = default;
	void Show() const override;

	Bike& operator=(const Bike& right) = default;
	bool operator==(const Bike& right) const;


private:
	int numGears;
};

