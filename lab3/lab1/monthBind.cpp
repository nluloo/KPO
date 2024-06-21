#include "monthBind.h"

void month_bind(int month)
{
	char months[12][20] = { {"Январь"},{"Февраль"},{"Март"},{"Апрель"},{"Май"},{"Июнь"},{"Июль"},{"Август"},{"Сентябрь"},{"Октябрь"},{"Ноябрь"},{"Декабрь"}};
	
	std::cout << months[month - 1] << std::endl;
}
