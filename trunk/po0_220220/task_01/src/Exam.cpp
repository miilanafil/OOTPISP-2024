#include "Tovarka.h"
Imia::Imia() {
    strcpy(name, "Unknown");
    SetKol(kol);
    SetSt(st);
    std::cout << "Called a constructor without parameters for an object" << this << std::endl;
}
Imia::Imia(const char* Name, int
           Kol, float St)
{
    strcpy(name, Name);
    SetKol(Kol);
    SetSt(St);
    std::cout << "\nCalled a constructor with parameters for an object " << this << std::endl;
}
Imia::Imia(const Imia& imia)
{
    strcpy(name, imia.name);
    SetKol(kol, imia.kol);
    SetSt(imia.st);
    std::cout << "Called a copy constructor for an object" << this << std::endl;
}
Imia::~Imia()
{
    std::cout << "Called a destructor for an object" << this << std::endl;
}
char* Imia::GetName()
{
    return name;
}
int Imia::GetKol() const
{
    return kol;
}
float Imia::GetSt() const
{
    return st;
}
void Imia::SetName(const char* Name)
{
    strcpy(name, Name);
}
void Imia::SetKol(int Kol)
{
    kol = Kol
}
void Imia::SetSt(int St)
{
    st = St;
}
void Imia::Set(const char* Name, int Kol, float St)
{
    strcpy(name, Name);
    kol = Kol;
    st = St;
}
void Imia::Print() const
{
    std::cout << "Имя: \t" << name << std::endl;
    std::cout << "Количество: \t" << kol << std::endl;
    std::cout << "Стоимость: \t" << st << std::endl;
    std::cout << std::endl;
}
