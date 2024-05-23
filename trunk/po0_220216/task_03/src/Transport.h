#pragma once
#include <iostream>
#include <string>
class Transport
{
public:
	Transport() = default;
	Transport(const std::string &_manufacturer, const int _age);
	Transport(const Transport& otherTransp) = delete;

	virtual ~Transport() = default;
	virtual void Show() const;

	Transport &operator=(const Transport& right) = default;
	bool operator==(const Transport& right) const;

private:
	std::string manufacturer;
	int age;
};

