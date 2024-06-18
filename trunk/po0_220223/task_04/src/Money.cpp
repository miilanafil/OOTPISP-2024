
#include "Money.h"

Money::Money(const std::string &moneyVect)
{
    std::stringstream ss(moneyVect);
    char delimiter;
    ss >> minutes >> delimiter >> seconds;
}

bool Money::operator==(const Money &a) const = default;
