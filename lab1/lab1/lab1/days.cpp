#include "stdafx.h"
#include "days.h"


int days(int day, int month, int dr, bool result) {

	if (result == true)
	{
		switch (month) {
		case 1:
			dr = day;
			break;
		case 2:
			dr = 31 + day;
			break;
		case 3:
			dr = 60 + day;
			break;
		case 4:
			dr = 91 + day;
			break;
		case 5:
			dr = 121 + day;
			break;
		case 6:
			dr = 152 + day;
			break;
		case 7:
			dr = 182 + day;
			break;
		case 8:
			dr = 213 + day;
			break;
		case 9:
			dr = 244 + day;
			break;
		case 10:
			dr = 274 + day;
			break;
		case 11:
			dr = 305 + day;
			break;
		case 12:
			dr = 335 + day;
			break;
		};
	}
	else
	{
		switch (month) {
		case 1:
			dr = day;
			break;
		case 2:
			dr = 31 + day;
			break;
		case 3:
			dr = 59 + day;
			break;
		case 4:
			dr = 90 + day;
			break;
		case 5:
			dr = 120 + day;
			break;
		case 6:
			dr = 151 + day;
			break;
		case 7:
			dr = 181 + day;
			break;
		case 8:
			dr = 212 + day;
			break;
		case 9:
			dr = 243 + day;
			break;
		case 10:
			dr = 273 + day;
			break;
		case 11:
			dr = 304 + day;
			break;
		case 12:
			dr = 334 + day;
			break;
		}
	}

	return dr;
}
