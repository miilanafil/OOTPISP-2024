#pragma once
#ifndef MONEYH
#define MONEYH

#include <iostream>

class Mmoney
{
public:
    Mmoney() = default;
    explicit Mmoney(const double a);
    Mmoney(const Mmoney& other) = default;
    ~Mmoney() = default;
    Mmoney& operator=(const Mmoney& a) = default;
    bool operator==(const Mmoney& a) const;
    auto operator<=>(const Mmoney& a) const = default;
    Mmoney operator+(const Mmoney& a) const;

    friend std::ostream& operator<<(std::ostream& out, const Mmoney& a)
    {
        out << a.GetR() << ',' << a.GetK() << std::endl;
        return out;
    }

    friend std::istream& operator>>(std::istream& in, Mmoney& a)
    {
        std::cout << "Введите количество рублей" << std::endl;
        in >> a.rubles;
        std::cout << "Введите количество копеек" << std::endl;
        in >> a.kopeck;
        return in;
    }

    inline int GetK() const { return kopeck; };
    inline long GetR() const { return rubles; };
    inline void SetK(const int k) { kopeck = k; };
    inline void SetR(const long r) { rubles = r; };

private:
    long rubles = 0;
    int kopeck = 0;
};

#endif
