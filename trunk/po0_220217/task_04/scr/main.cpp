#include "Vector.h"
#include <iostream>
#include "Time.h"

int main()
{
    Vector<int> A;
    Vector<int> B;

    std::cin >> A;
    std::cout << A;
    std::cout << A[1] << std::endl;

    B.Add(1);
    B.Add(2);
    B.Add(3);
    B.Add(4);

    std::cout << B;
    std::cout << B[2] << std::endl;
    std::cout << "size A = " << A() << std::endl;

    auto C = A + 10;
    std::cout << *C;
    std::cout << "2 element in vector C is " << (*C)[1] << std::endl;

    auto F = A + B;
    std::cout << *F;

    Vector<Time> time;

    std::cin >> time;
    std::cout << time;

    time.Add(Time("10:41"));
    time.Add(Time("50:51"));
    time.Add(Time("32:50"));
    time.Add(Time("17:11"));

    std::cout << time;
    return 0;
}