#include "Money.h"

Money::Money(const std::string money)
{
    std::stringstream ss(money);
    char delimiter;
    ss >> minutes >> delimiter >> seconds;
}

bool Money::operator==(const Money &a) const
{
    return (minutes == a.minutes && seconds == a.seconds);
}
