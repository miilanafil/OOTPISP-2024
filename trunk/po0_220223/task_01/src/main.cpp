#include <iostream>
#include <vector>
#include "Tovarka.h"

using namespace std;
int main() {
    setlocale(LC_ALL, "rus");

    void (Imia:: * fptr)(const std::string_view, int, int);
    fptr = &Imia::Set;
    Imia lib1;
    (lib1.*fptr)("Macbook", 12, 3000);
    lib1.Print();

    Imia lib4(lib1);
    lib4.Print();
    
    Imia lib5 = lib1;
    lib5.Print();

    vector<Imia> p(2);

    p[0].Set("Lenovo", 9, 1500);
    p[0].Print();
    
    p[1].Set("Samsung", 10, 2300);
    p[1].Print();

    return 0;
}
