#include "Trapeze.h"

Trapeze::Trapeze(const std::string &_area, const int _perimeter, const int _facet, int _cargoCapaciry)
    : Square(_area, _perimeter, _facet), cargoCapacity(_cargoCapaciry)
{

}

void Trapeze::Show() const
{
    std::cout << std::endl;
    Square::Show();
    std::cout << "Cargo Capacity: " << cargoCapacity << std::endl;
}

bool Trapeze::operator==(const Trapeze& right) const
{
    if (this->cargoCapacity == right.cargoCapacity)
        return true;
    else return false;
}
