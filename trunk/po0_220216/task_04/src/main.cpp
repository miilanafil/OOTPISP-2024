#include "Vector.h"
#include <iostream>
#include "Time.h"

int main()
{
    Vector<int> vect1;
    Vector<int> vect2;

    std::cin >> vect1;
    std::cout << vect1;
    std::cout << vect1[1] << std::endl;

    vect2.addVect(1);
    vect2.addVect(2);
    vect2.addVect(3);
    vect2.addVect(4);

    std::cout << vect2;
    std::cout << vect2[2] << std::endl;
    std::cout << "size vector 1: " << vect1() << std::endl;

    auto sumVect = vect1 + vect2;
    std::cout << *sumVect;

    Vector<Time> timeVect;

    std::cin >> timeVect;
    std::cout << timeVect;

    timeVect.addVect(Time("10:41"));
    timeVect.addVect(Time("50:51"));
    timeVect.addVect(Time("32:50"));
    timeVect.addVect(Time("17:11"));

    std::cout << timeVect;
    return 0;
}