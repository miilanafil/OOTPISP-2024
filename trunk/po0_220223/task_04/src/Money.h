#include <iostream>
#include <string>
#include <sstream>

class Money
{
public:
    Money() = default;
    explicit Money(std::string money);
    ~Money() = default;

    Money &operator=(const Money &a) = default;
    bool operator==(const Money &a) const;

    inline int GetMin() const { return minutes; };
    inline int GetSec() const { return seconds; };

    inline void SetPenny(const int min) { minutes = min; };
    inline void SetRubles(const int sec) { seconds = sec; };

    friend std::ostream &operator<<(std::ostream &out, const Money &a)
    {
        out << a.GetMin() << ":" << a.GetSec() << " ";
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Money &a)
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
