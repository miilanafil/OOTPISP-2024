#pragma once
#include "Number.h"
#include <iostream>
#ifndef CONTAINERH
#define CONTAINERH

class Container
{
public:
	Container() = default;
	~Container() = default;

	class Item
	{
	public:
		explicit Item(Number* _number) : number(_number)
		{}
		Number* number;
		Item* next = nullptr;
	};

	void Add(Number* _number);
	int Size() const;
	void PrintAll() const;

	Number* operator[](const int index);

private:
	int size = 0;
	Item* begin;
	Item* last;

};
#endif

