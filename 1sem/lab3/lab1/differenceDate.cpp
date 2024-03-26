#include "differenceDate.h"

int difference_date(int firstDate, int secondDate)
{

    int firstDateDay = (firstDate / 10000000) * 10 + (firstDate / 1000000) % 10;
    int firstDateMonth = (firstDate / 100000) % 10 * 10 + (firstDate / 10000) % 10;
    int firstDateYear = firstDate % 10000;
    int secondDateDay = (secondDate / 10000000) * 10 + (secondDate / 1000000) % 10;
    int secondDateMonth = (secondDate / 100000) % 10 * 10 + (secondDate / 10000) % 10;
    int secondDateYear = secondDate % 10000;
    
    int diffYearInDay = abs(secondDateYear - firstDateYear) * 365;
    
    int numberFirst = days(firstDateDay, firstDateMonth, firstDateYear, leapYear(firstDateYear));
    int numberSecond = days(secondDateDay, secondDateMonth, secondDateYear, leapYear(secondDateYear));

    int leapCount = 0;

    while (secondDateYear != firstDateYear) {
        if (leapYear(firstDateYear)) {
            leapCount++;
        }
        firstDateYear++;
    }

    return abs(numberSecond - numberFirst) + diffYearInDay + leapCount;
}
