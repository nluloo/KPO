#include "stdafx.h"
#include "days.h"


int days(int day, int month, int dr, bool result) {

	int months[13] = { 0, 31, 28, 31,30,31,30,31,31,30,31,30,31 };

	if (result)
	{
		months[2] = 29;
	}
	dr = day;
	for (int i = 0; i < month; i++) {
		dr += months[i];
	}

	return dr;
}
