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

std::partial_ordering Coins::operator<=>(const Coins& a) const
{
    if (rubles < a.rubles || (rubles == a.rubles && kopeck < a.kopeck))
        return std::partial_ordering::less;
    if (rubles > a.rubles || (rubles == a.rubles && kopeck > a.kopeck))
        return std::partial_ordering::greater;
    return std::partial_ordering::equivalent;
}

Coins::Coins(long r, int k) : rubles(r), kopeck(k) {}
