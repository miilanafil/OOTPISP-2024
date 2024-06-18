#pragma once
#include "Number.h"
#ifndef INTEGERH
#define INTEGERH

class Integer :
    public Number
{
public:
    Integer() = default;
    explicit Integer(const int _value);
    ~Integer() override = default;

    void SetValue(const int _value);
    int GetValue() const;

    void Print() const override;

    bool operator == (const Integer& other) const;
private:
    int value = 0;
};
#endif

