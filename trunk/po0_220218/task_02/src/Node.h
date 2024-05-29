#pragma once
#include "Detail.h"
#ifndef NODEH
#define NODEH

class Node :
    public Detail
{
public:
    Node() = default;
    Node(const int _amount_of_parts, const bool _isCollapsable, const std::string_view _name, const bool _is_metal);
    void Print() const override;

    void SetIsCollapsable(const bool _isCollapsable);
    bool GetIsCollapsable() const;
    void SetAmountOfParts(const int _amount_of_parts);
    int GetAmountOfParts() const;
private:
    bool isCollapsable = false;
    int amount_of_parts = 0;
};

#endif
