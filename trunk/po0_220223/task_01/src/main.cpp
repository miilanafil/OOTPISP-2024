#include <iostream>
#include "Tovarka.h"
using namespace std;
int main() {
setlocale(LC_ALL, "rus");
    void (Imia:: * fptr)(const char*, int, float); fptr = &Imia::Set;
    Imia lib1;
    (lib1.*fptr)("Honor", 1000, 200);
     lib1.Print();
Imia tovar[] = { Imia("Macbook", 1000, 10000),Imia("Asus",1000,43000),Imia("Acer",1000,66000),Imia(" ",2000,2000) }; tovar[2].SetImia("MSI");
tovar[3].Set("Lenovo", 19999, 77000);
for (int i = 0; i < 4; i++) {
    tovar[i].Print(); }
    Imia tovar4((tovar[3]));
                tovar4.Print();
Imia tovar5 = tovar[0];
    Imia* tovar6 = &tovar5; tovar6->Print();
Imia* ad = new Imia[2];
ad->Set("Philips", 35355, 90000); ad->Print();
ad++;
ad->Set("Samsung", 798787, 103000); ad->Print();
    ad--;
    delete [] ad;
return 0; }
