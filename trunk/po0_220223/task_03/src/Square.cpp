#include "Square.h"


Square::Square(const std::string &_area, const int _perimeter, const int _facet)
    : Figures(_area, _perimeter), facet(_facet)
{

}

void Square::Show() const
{
    std::cout << std::endl;
    Figures::Show();
    std::cout << "facet: "  << facet  << std::endl;
}

bool Square::operator==(const Square& right) const
{
    if (this->facet == right.facet)
        return true;
    else return false;
}
