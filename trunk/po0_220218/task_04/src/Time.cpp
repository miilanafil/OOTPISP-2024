#include "Time.h"

Time::Time(std::string_view timeString)
{
    std::stringstream ss(timeString.data());
    char tokenDelimiter;
    ss >> hours >> tokenDelimiter >> minutes >> tokenDelimiter >> seconds;
}