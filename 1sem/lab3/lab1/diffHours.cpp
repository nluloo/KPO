#include "diffHours.h"

long long diff_hours(int diffInDay, bool track)
{
    long long diffToHours = diffInDay * 24;

    std::time_t now = std::time(nullptr);

    std::tm ltm;

    localtime_s(&ltm, &now);

    int hour = ltm.tm_hour;
       
    if (track) {
        return diffToHours + hour - 24;
    }
    else {
        return diffToHours - hour;
    }
}