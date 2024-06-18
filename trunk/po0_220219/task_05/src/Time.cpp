#include "Time.h"

Time::Time(int m, int s) : min(m), sec(s) {}

Time Time::operator*(int k) const {
    int totalSeconds = (min * 60 + sec) * k;
    int newMin = totalSeconds / 60;
    int newSec = totalSeconds % 60;
    return Time(newMin, newSec);
}

std::ostream& operator<<(std::ostream& out, const Time& t) {
    out << t.min << ":" << t.sec;
    return out;
}

std::istream& operator>>(std::istream& in, Time& t) {
    in >> t.min >> t.sec;
    return in;
}
