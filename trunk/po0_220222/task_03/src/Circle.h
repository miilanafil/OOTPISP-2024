#pragma once
#include "Geometry.h"
#define _USE_MATH_DEFINES
#include <cmath>
#ifndef CIRCLEH
#define CIRCLEH 


class Circle :
    public Geometry
{
public:
    Circle() = default;
    explicit Circle(const float _radius);
    Circle(const Circle& old) = delete;
    ~Circle() override = default;

    float GetRadius() const;
    void SetRadius(const float _radius);
    void CountArea() override;
    void CountPerimeter() override;
    void Print() const override;
    bool operator==(const Circle &right) const;
private:
    float radius = 0.00;
};

#endif
