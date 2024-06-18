
#include "Vector.h"
#include "Time.h"

#include <iostream>

int main()
{
    Vector<int> vectorForInt1;

    vectorForInt1.insertVector(4);
    vectorForInt1.insertVector(66);
    vectorForInt1.insertVector(12);

    std::cout << vectorForInt1;
    std::cout << "Vector 1 size: " << vectorForInt1() << std::endl;

    auto sumVect = vectorForInt1 * 5;
    std::cout << *sumVect;

    Vector<Time> vectorForTime;

    vectorForTime.insertVector(Time("12:10:41"));
    vectorForTime.insertVector(Time("10:50:51"));
    vectorForTime.insertVector(Time("23:32:50"));
    vectorForTime.insertVector(Time("11:17:11"));

    std::cout << vectorForTime;
    return 0;
}