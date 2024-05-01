#include <iostream>
#include "Tovarka.h"

using namespace std;
int main() {
    setlocale(LC_ALL, "rus");

    void (Imia:: * fptr)(const char*, int, float);
    fptr = &Imia::Set;
    Imia lib1;
    (lib1.*fptr)("Macbook", 3000, 12);
    lib1.Print();

    Imia lib4(lib1);
    lib4.Print();
    
    Imia lib5 = lib1;
    Imia* lib6 = &lib5;
    lib6->Print();
    Imia* p = new Imia[2];
    p->Set("Lenovo", 1500, 9);
    p->Print();
    p++;
    p->Set("Samsung", 2300, 10);
    p->Print();
    p--;
    return 0;
}
