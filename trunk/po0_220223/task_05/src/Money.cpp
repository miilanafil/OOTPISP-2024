#include "Money.h"

Mmoney::Mmoney(double a)
{
    rubles = static_cast<long>(a);
    kopeck = static_cast<int>((a - rubles) * 100);
}

bool Mmoney::operator==(const Mmoney& a) const
{
    return (rubles == a.rubles && kopeck == a.kopeck);
}

Mmoney operator+(const Mmoney& lhs, const Mmoney& rhs)
{
    Mmoney result;
    result.rubles = lhs.rubles + rhs.rubles;
    result.kopeck = lhs.kopeck + rhs.kopeck;
    
    if (result.kopeck >= 100)
    {
        result.rubles += result.kopeck / 100;
        result.kopeck %= 100;
    }
    
    return result;
}
