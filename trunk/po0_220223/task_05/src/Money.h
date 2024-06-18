#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <string_view>

class Money
{
public:
    static constexpr int SEC_IN_HOUR = 3600;
    static constexpr int SEC_IN_MIN = 60;

    Money() = default;
    explicit Money(std::string_view timeString);
    ~Money() = default;

    Money &operator=(const Money &money) = default;
    auto operator<=>(const Money &t) const = default;

    int getMinutes() const { return minutes; }
    int getSeconds() const { return seconds; }
    int getHours() const { return hours; }

    void setMinutes(int min) { minutes = min; }
    void setSeconds(int sec) { seconds = sec; }
    void setHours(int hrs) { hours = hrs; }

    
    

    friend std::ostream &operator<<(std::ostream &os, const Money &t)
    {
        os << t.getHours() << ":" << t.getMinutes() << ":" << t.getSeconds();
        return os;
    }

private:
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    void fromString(std::string_view moneyString);
};

Money::Money(std::string_view moneyString)
{
    fromString(moneyString);
}

void Money::fromString(std::string_view moneyString)
{
    std::istringstream ss(std::string(moneyString.data()));
    char delim;
    ss >> hours >> delim >> minutes >> delim >> seconds;
}



 

