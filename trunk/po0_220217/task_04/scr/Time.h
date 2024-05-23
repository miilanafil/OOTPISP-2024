#include <iostream>
#include <string>
#include <sstream>

class Time
{
public:
    Time() = default;
    explicit Time(std::string time);
    ~Time() = default;

    Time &operator=(const Time &a) = default;
    bool operator==(const Time &a) const;

    inline int GetMin() const { return minutes; };
    inline int GetSec() const { return seconds; };

    inline void SetPenny(const int min) { minutes = min; };
    inline void SetRubles(const int sec) { seconds = sec; };

    friend std::ostream &operator<<(std::ostream &out, const Time &a)
    {
        out << a.GetMin() << ":" << a.GetSec() << " ";
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Time &a)
    {
        std::cout << "Enter minutes: ";
        in >> a.minutes;
        std::cout << "Enter seconds: ";
        in >> a.seconds;
        return in;
    }

private:
    int minutes = 0;
    int seconds = 0;
};