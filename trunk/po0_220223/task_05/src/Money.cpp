#include "Money.h"

Coins::Coins(double a)
{
    rubles = static_cast<long>(a);
    kopeck = static_cast<int>((a - rubles) * 100 + 0.5);  // округление до ближайшего целого
}

bool Coins::operator==(const Coins& a) const
{
    return (kopeck == a.kopeck && rubles == a.rubles);
}

Coins::Coins(long r, int k) : rubles(r), kopeck(k) {}
