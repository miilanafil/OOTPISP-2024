#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>

#include "Figures.h"
#include "Square.h"
#include "Ellipse.h"
#include "Trapeze.h"



class FiguresCollection
{
public:

    FiguresCollection() = default;

    void showAll() const;
    void add(Figures* figures);
    int size() const;

    Figures* operator[](const int index);


    struct Node
    {
        explicit Node(Figures* _date)
            : date(_date)
        {
        }

        Figures* date;
        std::unique_ptr<Node> next = nullptr;
    };

private:
    int collectionSize;
    std::unique_ptr<Node> head = nullptr;
};

