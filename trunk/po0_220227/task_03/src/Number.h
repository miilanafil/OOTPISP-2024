#pragma once

#ifndef NUMBERH
#define NUMBERH

class Number
{
public:
	Number() = default;
	explicit Number(const char _designating);
	virtual ~Number() = default;

	void SetDesignating(const char _designating);
	char GetDesignating() const;

	virtual void Print() const;

	bool operator == (const Number& _other) const;
private:
	char designating = ' ';
};
#endif 

