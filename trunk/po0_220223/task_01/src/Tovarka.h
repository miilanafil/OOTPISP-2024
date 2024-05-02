#pragma once
#ifndef TovarkaH
#define TovarkaH
#include <iostream>
#include <cstring>
#include <string> 
const int len = 40;
class Imia
{
    
    std::string name;
    int kol;
    int st;
public:
    Imia& operator=(const Imia&) = delete;
    
    Imia();
    Imia(const std::string_view, int, int);
    Imia(const Imia&) = default;
    ~Imia() = default;
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


