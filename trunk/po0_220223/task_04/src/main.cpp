#include "Vvector.h"
#include <iostream>
#include "Money.h"

int main()
{
    Vvector<int> A;
    Vvector<int> B;

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

    Vvector<Money> time;

    std::cin >> time;
    std::cout << time;

    time.Add(Money("10:41"));
    time.Add(Money("50:51"));
    time.Add(Money("32:50"));
    time.Add(Money("17:11"));

    std::cout << time;
    return 0;
}
