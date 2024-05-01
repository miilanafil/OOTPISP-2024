#include "Tovarka.h"
Imia::Imia() {
    strcpy(name, "Unknown");
    SetKol(kol);
    SetSt(st);
    std::cout << "Вызывается конструктор без параметров для объекта" << this << std::endl;
}
Imia::Imia(const char* Name, int
           Kol, int St)
{
    strcpy(name, Name);
    SetKol(Kol);
    SetSt(St);
    std::cout << "\nВызывается конструктор с параметрами для объекта " << this << std::endl;
}
Imia::Imia(const Imia& imia)
{
    strcpy(name, imia.name);
    SetKol(imia.kol);
    SetSt(imia.st);
    std::cout << "Вызывается конструктором копирования для объекта" << this << std::endl;
}
Imia::~Imia()
{
    std::cout << "Вызывается деструктором объекта" << this << std::endl;
}
char* Imia::GetName()
{
    return name;
}
int Imia::GetKol() const
{
    return kol;
}
int Imia::GetSt() const
{
    return st;
}
void Imia::SetName(const char* Name)
{
    strcpy(name, Name);
}
void Imia::SetKol(int Kol)
{
    kol = Kol;
}
void Imia::SetSt(int St)
{
    st = St;
}
void Imia::Set(const char* Name, int Kol, int St)
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
