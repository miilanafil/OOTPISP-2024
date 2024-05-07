#include "Figures.h"

Figures::Figures(const std::string &_area, const int _perimeter) : area(_area), perimeter(_perimeter)
{

}

void Figures::Show() const
{
    std::cout << std::endl;
    std::cout << "area: "  << area  << std::endl;
    std::cout << "perimeter: " <<  perimeter << std::endl;
}


bool Figures::operator==(const Figures& right) const
{
    if (this->area == right.area && this->perimeter == right.perimeter)
        return true;
    else return false;
}
