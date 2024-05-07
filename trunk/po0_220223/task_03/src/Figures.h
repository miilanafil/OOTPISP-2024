#pragma once
#include <iostream>
#include <string>
class Figures
{
public:
    Figures() = default;
    Figures(const std::string &_area, const int _perimeter);
    Figures(const Figures& otherFigures) = delete;

    virtual ~Figures() = default;
    virtual void Show() const;

    Figures &operator=(const Figures& right) = default;
    bool operator==(const Figures& right) const;

private:
    std::string area;
    int perimeter;
};

