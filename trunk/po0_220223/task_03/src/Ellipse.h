#pragma once
#include "Figures.h"
#include <string>
class Ellipse : public Figures
{
public:
    Ellipse() = default;
    Ellipse(const std::string &_area, const int _perimeter, const int _facet);
    Ellipse(const Ellipse& other) = delete;
    ~Ellipse() override = default;
    void Show() const override;

    Ellipse& operator=(const Ellipse& right) = default;
    bool operator==(const Ellipse& right) const;


private:
    int facet;
};
