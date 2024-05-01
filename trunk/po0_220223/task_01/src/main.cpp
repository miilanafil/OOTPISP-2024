#include <iostream>
#include "Tovarka.h"

using namespace std;
int main() {
    setlocale(LC_ALL, "rus");

    void (Imia:: * fptr)(const char*, int, int);
    fptr = &Imia::Set;
    Imia lib1;
    (lib1.*fptr)("Macbook", 12, 3000);
    lib1.Print();

    Imia lib4(lib1);
    lib4.Print();
    
    Imia lib5 = lib1;
    Imia* lib6 = &lib5;
    lib6->Print();
    Imia* p = new Imia[2];
    p->Set("Lenovo", 9, 1500);
    p->Print();
    p++;
    p->Set("Samsung", 10, 2300);
    p->Print();
    p--;
    return 0;
}
