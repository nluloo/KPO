#include "findDay.h"

enum nameMonth {
	������ = 1, �������, ����, ������, ���, ����, ����, ������, ��������, �������, ������, �������
};

void find_day(int numberDay, int year)
{
	int month[13] = {0, 31, 28, 31,30,31,30,31,31,30,31,30,31 };
	int i = 1;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		month[2] = 29;
		while (numberDay > month[i]) {
			numberDay -= month[i];
			i++;
		}

		if (i == ���� && numberDay == 8) {
			std::cout << "� 8 �����!!" << std::endl;
		}
		if (i == �������� && (numberDay == 12 || numberDay == 13)) {
			std::cout << "� ���� ������������!!" << std::endl;
		}
		if (i == ������� && numberDay == 31) {
			std::cout << "����� ���!!" << std::endl;
		}
}
