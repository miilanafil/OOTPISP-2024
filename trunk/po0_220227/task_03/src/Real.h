#pragma once
#include "Number.h"
#ifndef  REALH
#define REALH

class Real :
    public Number
{
public:
    Real() = default;
    explicit Real(const float _value);
    ~Real() override = default;

    void SetValue(const float _value);
    float GetValue() const;

    void Print() const override;

    bool operator == (const Real& other) const;

private:
    float value = 0;
};
#endif


