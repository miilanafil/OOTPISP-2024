#include "Time.h"

Time::Time(std::string time)
{
    std::stringstream ss(time);
    char delimiter;
    ss >> minutes >> delimiter >> seconds;
}

bool Time::operator==(const Time &a) const
{
    return (minutes == a.minutes && seconds == a.seconds);
}
