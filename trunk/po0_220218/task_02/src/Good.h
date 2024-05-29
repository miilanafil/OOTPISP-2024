#pragma once
#include "Detail.h"
#include <iostream>
#ifndef GOODH
#define GOODH

class Good :
    public Detail
{
public:
    Good() = default;
    Good(const int _price, const std::string_view _name, const bool _is_metal);
    void Print() const override;

    int GetPrice() const;
    void SetPrice(const int _price);
private:
    int price = 0;
};

#endif
