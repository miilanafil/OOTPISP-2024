#include "Money.h"

Mmoney::Mmoney(const double a)
{
    // Ваша реализация конструктора
}

bool Mmoney::operator==(const Mmoney& a) const
{
    // Ваша реализация оператора сравнения ==
    return (this->rubles == a.rubles && this->kopeck == a.kopeck);
}

Mmoney Mmoney::operator+(const Mmoney& a) const
{
    Mmoney result;
    result.rubles = this->rubles + a.rubles;
    result.kopeck = this->kopeck + a.kopeck;

    if (result.kopeck >= 100)
    {
        result.rubles += result.kopeck / 100;
        result.kopeck %= 100;
    }

    return result;
}
