#include <iostream>
#include <string>
#include <sstream>

class Time
{
public:
    Time() = default;
    explicit Time(const std::string &time);
    ~Time() = default;

    Time &operator=(const Time &a) = default;
    bool operator==(const Time &a) const;

    inline int getMinutrs() const { return minutes; };
    inline int getSeconds() const { return seconds; };

    inline void setPennny(const int min) { minutes = min; };
    inline void setRubl(const int sec) { seconds = sec; };

    friend std::ostream &operator<<(std::ostream &output, const Time &a)
    {
        output << a.getMinutrs() << ":" << a.getSeconds() << " ";
        return output;
    }

    friend std::istream &operator>>(std::istream &input, Time &a)
    {
        std::cout << "Minutes: ";
        input >> a.minutes;
        std::cout << "Seconds: ";
        input >> a.seconds;
        return input;
    }

private:
    int minutes = 0;
    int seconds = 0;
};