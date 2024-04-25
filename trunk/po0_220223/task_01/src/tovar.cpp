#include "Tovarka.h"
#include <cstring>

//конструктор без параметров
Imia::Imia() {
    strcpy(imia, "Неизвестно");
    kol=0;
    st = 0;
std::cout << "Вызван конструктор без параметров для объекта " << this << std::endl;
}
//конструктор с параметрами
Imia::Imia(const char* Imia, int Kol, float St) {
    strcpy(imia, Imia);
    st = St;
    kol=Kol;
std::cout << "\nКонструктор с параметрами вызван для объекта " << this << std::endl;
}
//конструктор копирования
Imia::Imia(const Imia& tovar)
{
    strcpy(imia, tovar.imia);
    kol = tovar.kol;
st = tovar.st;
std::cout << "Вызван конструктор копирования для объекта " << this << std::endl;
} //деструктор
Imia::~Imia()
{
std::cout << "Вызван деструктор для объекта " << this << std::endl; }
char* Imia::GetImia() {
return imia; }
int Imia::Getkol() {
return kol; }
float Imia::Getst() {
return st; }
void Imia::SetImia(const char* Imia) {
    strcpy(imia, Imia); }
void Imia::Setkol(int Kol) {
    kol = Kol; }
void Imia::Setst(float St) {
st = St; }
void Imia::Set(const char* Imia, int Kol, float St) {
    strcpy(imia, Imia);
    kol = Kol;
    st = St; }
void Imia::Print() {
std::cout << "Имя: \t" << imia << std::endl; std::cout << "Количество: \t" << kol << std::endl; std::cout << "Стоимость: \t" << st << std::endl; std::cout << std::endl;
}

