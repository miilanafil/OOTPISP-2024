#pragma once
#ifndef TovarkaH
#define TovarkaH

#include <iostream>
#include <string>

class Imia
{
    std::string name;
    int kol;
    int st;

public:
    Imia& operator=(const Imia&) = delete; // Delete copy assignment operator

    Imia(); // Default constructor
    Imia(const std::string_view, int, int);
    ~Imia(); // Destructor

    std::string GetName() const;
    int GetKol() const;
    int GetSt() const;
    void SetName(const std::string_view);
    void SetKol(int);
    void SetSt(int);
    void Set(const std::string_view Name, int Kol, int St);
    void Print() const;
};

#endif
