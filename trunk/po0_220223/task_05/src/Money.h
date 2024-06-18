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
    
    friend Mmoney operator+(const Mmoney& a, const Mmoney& b);
    friend std::ostream& operator<<(std::ostream& out, const Mmoney& a);
    friend std::istream& operator>>(std::istream& in, Mmoney& a);

    inline int GetK() const { return kopeck; };
    inline long GetR() const { return rubles; };
    inline void SetK(const int k) { kopeck = k; };
    inline void SetR(const long r) { rubles = r; };

private:
    long rubles = 0;
    int kopeck = 0;
};

// Constructor that takes a double value
Mmoney::Mmoney(const double a)
{
    rubles = static_cast<long>(a);
    kopeck = static_cast<int>((a - rubles) * 100);
}

// Implementation of operator==
bool Mmoney::operator==(const Mmoney& a) const
{
    return (rubles == a.rubles) && (kopeck == a.kopeck);
}

// Implementation of operator+
Mmoney operator+(const Mmoney& a, const Mmoney& b)
{
    Mmoney result;
    result.rubles = a.rubles + b.rubles;
    result.kopeck = a.kopeck + b.kopeck;
    
    // Adjust kopecks if they exceed 99
    if (result.kopeck >= 100) {
        result.rubles++;
        result.kopeck -= 100;
    }

    return result;
}

// Friend function implementation of operator<<
std::ostream& operator<<(std::ostream& out, const Mmoney& a)
{
    out << a.rubles << ',' << a.kopeck;
    return out;
}

// Friend function implementation of operator>>
std::istream& operator>>(std::istream& in, Mmoney& a)
{
    std::cout << "Enter rubles: ";
    in >> a.rubles;
    std::cout << "Enter kopeck: ";
    in >> a.kopeck;
    return in;
}

#endif
