#include "monthBind.h"

void month_bind(int month)
{
	char months[12][20] = { {"������"},{"�������"},{"����"},{"������"},{"���"},{"����"},{"����"},{"������"},{"��������"},{"�������"},{"������"},{"�������"}};
	
	std::cout << months[month - 1] << std::endl;
}
