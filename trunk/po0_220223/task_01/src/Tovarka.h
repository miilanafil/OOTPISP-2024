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
    Imia() = default; // Конструктор по умолчанию
    Imia(const std::string_view, int, int);
    Imia(const Imia&) = delete; // Удаление конструктора копирования
    ~Imia() = default; // Деструктор по умолчанию

    Imia& operator=(const Imia&) = delete; 

    std::string GetName() const;
    int GetKol() const;
    int GetSt() const;
    void SetName(const std::string_view);
    void SetKol(int);
    void SetSt(int);
    void Set(const std::string_view, int, int);
    void Print() const;
};

#endif
