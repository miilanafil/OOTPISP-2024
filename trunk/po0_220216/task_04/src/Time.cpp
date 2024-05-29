
#include "Time.h"

Time::Time(const std::string &timeVect)
{
    std::stringstream ss(timeVect);
    char delimiter;
    ss >> minutes >> delimiter >> seconds;
}

bool Time::operator==(const Time &a) const = default;