#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time {
public:
    Time() = default;
    Time(int m, int s);
    Time(const Time& t) = default;
    Time& operator=(const Time& t) = default;
    Time operator*(int k) const;
    friend std::ostream& operator<<(std::ostream& out, const Time& t);
    friend std::istream& operator>>(std::istream& in, Time& t);
    ~Time() = default;

private:
    int min{ 0 };
    int sec{ 0 };
};

#endif 
