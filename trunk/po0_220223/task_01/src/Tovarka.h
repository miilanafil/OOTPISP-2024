#ifndef Tovarka
#define Tovarka
#include <iostream>
const int len = 40; class Imia {
char imia[len]; int kol; float st;
public:
Imia(); //конструктор без параметров
    Imia(const char*, int, float); //конструктор с параметрами
Imia(const Imia&); ~Imia();
char* GetImia();
int Getkol();
    float Getst();
//конструктор копирования //деструктор
void SetImia(const char*);
void Setkol(int);
    void Setst(float);
void Set(const char*, int, float);
    void Print();
};
#endif


