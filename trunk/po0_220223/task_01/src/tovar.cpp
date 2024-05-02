#include "Tovarka.h"
Imia::Imia() : name("Неизвестно"), kol(0), st(0) {
    std::cout << "Вызывается конструктор без параметров для объекта " << this << std::endl;
}

Imia::Imia(const std::string_view Name, int Kol, int St)
    : name(Name), kol(Kol), st(St) {
    std::cout << "Вызывается конструктор с параметрами для объекта " << this << std::endl;
}


std::string Imia::GetName() const {
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
void Imia::SetName(const std::string_view Name)
{
    name = Name;
}
void Imia::SetKol(int Kol)
{
    kol = Kol;
}
void Imia::SetSt(int St)
{
    st = St;
}
void Imia::Set(const std::string_view Name, int Kol, int St)

{
    name = std::string(Name);
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
