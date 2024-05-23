#pragma once
#include "Geometry.h"
#ifndef RECTANGLEH
#define RECTANGLEH


class Rectangle :
    public Geometry
{
public:
    Rectangle() = default;
    Rectangle(const float _length, const float _width);
    Rectangle(const Rectangle& old) = delete;
    ~Rectangle() override = default;
    void SetLength(const float _length);
    float GetLength() const;
    void SetWidth(const float _width);
    float GetWidth() const;

    void CountArea() override;
    void CountPerimeter() override;
    void Print() const override;

    bool operator==(const Rectangle &right) const;
private:
    float length = 0.00;
    float width = 0.00;

};

#endif
