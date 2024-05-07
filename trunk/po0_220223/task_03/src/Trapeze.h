#pragma once
#include "Square.h"
class Trapeze : public Square
{

public:
    Trapeze() = default;
    Trapeze(const std::string &_area, const int _perimeter, const int _facet, int _cargoCapacity);
    Trapeze(const Trapeze& other) = delete;
    ~Trapeze() override = default;
    void Show() const override;

    Trapeze& operator=(const Trapeze& right) = default;
    bool operator==(const Trapeze& right) const;

private:
    int cargoCapacity;
};

