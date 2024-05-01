#pragma once
#ifndef TovarkaH
#define TovarkaH
#include <iostream>
#include <cstring>
const int len = 40;
const float lenn = 40;
class Imia
{
    char name[len];
    int kol;
    float st;
public:
    Imia();
    Imia(const char*, int, float);
    Imia(const Imia&);
    ~Imia();
    Imia& operator=(const Imia&); // Определение оператора присваивания    char* GetName();
    int GetKol() const;
    float GetSt() const;
    void SetName(const char*);
    void SetKol(int);
    void SetSt(int);
    void Set(const char*, int, float);
    void Print() const;
};
#endif


