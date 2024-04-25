
#include <iostream>
#include "Tovarka.h"
#include <cstring>


using namespace std;
int main() {
    setlocale(LC_ALL, "rus");

    void (Imia:: * fptr)(const char*, int, float);
    fptr = &Imia::Set;
    Imia lib1;
    (lib1.*fptr)("Macbook", 1, 20000);
    lib1.Print();

    Imia lib4(lib1);
    lib4.Print();

    Imia lib5 = lib1;
    Imia* lib6 = &lib5;
    lib6->Print();

    Imia* p = new Imia[2];
    p->Set("Lenovo", 2, 90000);
    p->Print();
    p++;
    p->Set("Asus", 3, 103000);
    p->Print();
    p--;
    delete[] p;
    
    return 0;
}
