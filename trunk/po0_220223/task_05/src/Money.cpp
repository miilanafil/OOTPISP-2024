#include "Money.h"
#include <memory>

Coins::Coins(const double a)
    : rubles(static_cast<long>(a)),
      kopeck(static_cast<int>((a - static_cast<int>(a)) * 100))
{
}

bool Coins::operator==(const Coins& a) const
{
    return (kopeck == a.kopeck && rubles == a.rubles);
}

bool Coins::operator<(const Coins& a) const
{
    if (rubles < a.rubles)
        return true;
    if (rubles == a.rubles && kopeck < a.kopeck)
        return true;
    return false;
}

bool Coins::operator>(const Coins& a) const
{
    if (rubles > a.rubles)
        return true;
    if (rubles == a.rubles && kopeck > a.kopeck)
        return true;
    return false;
}

Coins::Coins(long r, int k) : rubles(r), kopeck(k) {}
