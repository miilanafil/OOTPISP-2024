#pragma once
#include "Node.h"
#ifndef MECHANISMH
#define MECHANISMH

class Mechanism :
    public Node
{
public:
    Mechanism() = default;
    Mechanism(const std::string_view _purpose, const int _amount_of_parts, const bool _isCollapsable, const std::string_view _name, const bool _is_metal);
    void Print() const override;

    void SetPurpose(const std::string_view _purpose);
    std::string GetPurpose() const;
private:
    std::string purpose = "";
};

#endif 
