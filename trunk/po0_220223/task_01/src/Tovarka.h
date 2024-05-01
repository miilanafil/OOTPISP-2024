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
    Imia();
    Imia(const std::string&, int, int);
    Imia(const Imia&);
    ~Imia();
    std::string GetName() const;
    int GetKol() const;
    int GetSt() const;
    void SetName(const std::string&);
    void SetKol(int);
    void SetSt(int);
    void Set(const std::string&, int, int);

    void Print() const;
    
    
};
#endif


