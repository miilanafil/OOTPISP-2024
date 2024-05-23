#pragma once
#include "Geometry.h"
#ifndef TRIANGLEH
#define TRIANGLEH


class Triangle :
    public Geometry
{
public:
    Triangle() = default;
    Triangle(const float a, const float b, const float c);
    Triangle(const Triangle& old) = delete;
    ~Triangle() override = default;
    void SetA(const float _a);
    float GetA() const;
    void SetB(const float _b);
    float GetB() const;
    void SetC(const float _c);
    float GetC() const;

    void CountArea() override;
    void CountPerimeter() override;
    void Print() const override;

    bool operator==(const Triangle &right) const;

private:
    float a=0.00;
    float b=0.00;
    float c=0.00;
};

#endif
