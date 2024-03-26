#include "stdafx.h"
#include "birthday.h"

int birthday(int year, int numberDay, bool result)
{
    if (result) {
        if (numberDay > 314)
        {
            if(leapYear(year + 1))
                return 365 - abs(314 - numberDay);
            else
                return 366 - abs(314 - numberDay);
        }
        else
            return 314 - numberDay;
    }
    else {
        if (numberDay > 313){
            if (leapYear(year + 1))
                return 365 - abs(313 - numberDay);
            else
                return 366 - abs(313 - numberDay);
        }
        else
            return 313 - numberDay;
    }
}
