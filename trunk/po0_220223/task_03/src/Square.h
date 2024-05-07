#pragma once
#include "Figures.h"
#include<string>
class Square : public Figures
{
public:
    Square() = default;
    Square(const std::string &_area, const int _perimeter, const int _facet);
    Square(const Square& other) = delete;
    ~Square() override = default;
    void Show() const override;

    Square& operator=(const Square& right) = default;
    bool operator==(const Square& right) const;



private:
    int facet;
};

