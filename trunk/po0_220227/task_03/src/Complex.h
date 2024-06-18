#pragma once
#include "Number.h"
#include <iostream>
#ifndef COMPLEXH
#define COMPLEXH

class Complex :
    public Number
{
public:
    Complex() = default;
    Complex(const float _realPart, const float _imaginaryPart);
    ~Complex() override = default;

    void SetRealPart(const float _realPart);
    float GetRealPart() const;

    void SetImaginaryPart(const float _imaginaryPart);
    float GetImaginaryPart() const;

    void Print() const override;

    bool operator == (const Complex& other) const;

private:
    float realPart = 0;
    float imaginaryPart = 0;
};
#endif

