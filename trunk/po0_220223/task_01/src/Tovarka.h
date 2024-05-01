#pragma once
#ifndef TovarkaH
#define TovarkaH
#include <iostream>
#include <cstring>
const int len = 40;
class Imia
{
    char name[len];
    int kol;
    float st;
public:
    Imia();
    Imia(const char*, int, int);
    Imia(const Imia&);
    ~Imia();
    Imia& operator=(const Imia&); // Определение оператора присваивания
    char* GetName();
    int GetKol() const;
    int GetSt() const;
    void SetName(const char*);
    void SetKol(int);
    void SetSt(int);
    void Set(const char*, int, int);
    void Print() const;
    
    
};
#endif


