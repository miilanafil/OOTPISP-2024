#include "Ellipse.h"

Ellipse::Ellipse(const std::string &_area, const int _perimeter, const int _facet)
    : Figures(_area, _perimeter), facet(_facet)
{

}

void Ellipse::Show() const
{
    std::cout << std::endl;
    Figures::Show();
    std::cout << "Facet: "  << facet  << std::endl;
}

bool Ellipse::operator==(const Ellipse& right) const
{
    if (this->facet == right.facet)
        return true;
    else return false;
}
