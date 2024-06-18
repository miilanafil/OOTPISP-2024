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

    Money operator+(const Money &t) const;
    Money operator/(int divisor) const;
    Money operator-(const Money &t) const;

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

Money Money::operator+(const Money &t) const
{
    Money result;
    result.seconds = this->seconds + t.seconds;
    result.minutes = this->minutes + t.minutes + result.seconds / SEC_IN_MIN;
    result.hours = this->hours + t.hours + result.minutes / SEC_IN_MIN;
    result.minutes %= SEC_IN_MIN;
    result.seconds %= SEC_IN_MIN;

    if (result.hours > 24)
        result.hours -= 24;

    if (result.minutes > SEC_IN_MIN)
    {
        result.minutes -= SEC_IN_MIN;
        result.hours += 1;
    }

    if (result.seconds > SEC_IN_MIN)
    {
        result.seconds -= SEC_IN_MIN;
        result.minutes += 1;
    }

    return result;
}

Money Money::operator/(const int t) const
{
    int secCount = this->hours * SEC_IN_HOUR + this->minutes * SEC_IN_MIN + this->seconds;
    secCount /= t;
    Money result;

    result.hours = secCount / SEC_IN_HOUR;
    result.minutes = (secCount % SEC_IN_HOUR) / SEC_IN_MIN;
    result.seconds = secCount % SEC_IN_MIN;

    return result;
}

Money Money::operator-(const Money &t) const
{
    Money result;
    result.seconds = this->seconds - t.seconds;
    result.minutes = this->minutes - t.minutes;
    result.hours = this->hours - t.hours;

    if (result.seconds < 0)
    {
        result.seconds += SEC_IN_MIN;
        result.minutes -= 1;
    }

    if (result.minutes < 0)
    {
        result.minutes += SEC_IN_MIN;
        result.hours -= 1;
    }

    if (result.hours < 0)
        result.hours += 24;

    return result;
}
