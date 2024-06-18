#include <iostream>
#include "Vector.h"
#include "Time.h"

int main() {
    Time currentTime;
    std::cout << "Enter current time (minutes seconds): ";
    std::cin >> currentTime;
    std::cout << "Current time: " << currentTime << std::endl;

    Vector timeVectorA(5, currentTime);
    std::cout << "Enter values for time vector A (5 elements): ";
    std::cin >> timeVectorA;
    std::cout << "Time vector A: " << timeVectorA << std::endl;

    Vector timeVectorB(10, currentTime);
    std::cout << "Time vector B (size 10): " << timeVectorB << std::endl;

    timeVectorB = timeVectorA;
    std::cout << "Time vector B after assignment: " << timeVectorB << std::endl;
    std::cout << "Value of time vector A at index 2: " << timeVectorA[2] << std::endl;
    std::cout << "Length of time vector A: " << timeVectorA() << std::endl;

    Vector timeVectorC = timeVectorA * 10;
    std::cout << "Multiplying time vector A by 10: " << timeVectorC << std::endl;

    return 0;
}
