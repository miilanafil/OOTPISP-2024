#pragma once

#include <iostream>
#include <string>
#include <sstream>

class Time
{
public:
    Time() = default;
    explicit Time(std::string_view timeString);
    ~Time() = default;

    Time &operator=(const Time &time) = default;
    bool operator==(const Time &other) const = default;

    inline int minute() const { return minutes; };
    inline int second() const { return seconds; };
    inline int hour() const { return hours; };

    inline void setMinutes(const int m) { minutes = m; };
    inline void setSeconds(const int s) { seconds = s; };
    inline void setHours(const int h) { hours = h; };

    friend std::ostream &operator<<(std::ostream &out, const Time &time)
    {
        out << time.hour() << ":" << time.minute() << ":" << time.second() << " ";
        return out;
    }

    friend std::istream &operator>>(std::istream &inp, Time &time)
    {
        std::cout << "Hours: ";
        inp >> time.hours;
        std::cout << "Minutes: ";
        inp >> time.minutes;
        std::cout << "Seconds: ";
        inp >> time.seconds;
        return inp;
    }

private:
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
};