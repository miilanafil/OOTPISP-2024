#include "Money.h"
#include <memory>

Coins::Coins(const double a)
    : rubles(static_cast<long>(a)),
      kopeck(static_cast<int>((a - static_cast<long>(a)) * 100))
{
}

bool Coins::operator==(const Coins& a) const
{
    return (kopeck == a.kopeck && rubles == a.rubles);
}

std::strong_ordering Coins::operator<=>(const Coins& a) const
{
    if (auto cmp = rubles <=> a.rubles; cmp != 0)
        return cmp;
    return kopeck <=> a.kopeck;
}

Coins::Coins(long r, int k) : rubles(r), kopeck(k) {}
