#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>

#include "Transport.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"



class TransportCollection
{
public:

    TransportCollection() = default;

    void showAll() const;
    void add(Transport* _transport);
    int size() const;

    Transport* operator[](const int index);


    struct Node
    {
        explicit Node(Transport* _date)
            : date(_date)
        {
        }

        Transport* date;
        std::unique_ptr<Node> next = nullptr;
    };

private:
	int collectionSize;
	std::unique_ptr<Node> head = nullptr;
};

