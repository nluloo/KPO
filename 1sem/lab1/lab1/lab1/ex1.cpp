#include "stdafx.h"
#include "leapYear.h"
#include "days.h"
#include "birthday.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int day, month, year, dr = 0;
	int date;
	int s;

	cout << "Выберите способ ввода\n1.ДДММГГГ\n2.Другой)" << endl;
	cin >> s;

	switch (s)
	{
	case 1:
		cout << "Введите дату в формате ДДММГГГГ: ";
		cin >> date;

		if (date < 0 || date > 99999999) {
			cout << "fail(";
			exit(EXIT_FAILURE);
		}

		day = (date / 10000000) * 10 + (date / 1000000) % 10;
		month = (date / 100000) % 10 * 10 + (date / 10000) % 10;
		year = date % 10000;
		break;
	case 2:
		cout << "Введите день: ";
		cin >> day;
		cout << "Введите месяц: ";
		cin >> month;
		cout << "Введите год: ";
		cin >> year;
		break;
	default:
		break;
	}

	bool result = leapYear(year);

	switch (month) {
	case 1:
		if (day < 0 || day > 32)
			exit(EXIT_FAILURE);
		break;
	case 2:
		if(result)
		{
			if (day < 0 || day > 29)
				exit(EXIT_FAILURE);
		}
		else {
			if (day < 0 || day > 28)
				exit(EXIT_FAILURE);
		}
		break;
	case 3:
		if (day < 0 && day > 32)
			exit(EXIT_FAILURE);
		break;
	case 4:
		if (day < 0 && day > 31)
			exit(EXIT_FAILURE);
		break;
	case 5:
		if (day < 0 && day > 32)
			exit(EXIT_FAILURE);
		break;
	case 6:
		if (day < 0 && day > 31)
			exit(EXIT_FAILURE);
		break;
	case 7:
		if (day < 0 && day > 32)
			exit(EXIT_FAILURE);
		break;
	case 8:
		if (day < 0 && day > 31)
			exit(EXIT_FAILURE);
		break;
	case 9:
		if (day < 0 && day > 32)
			exit(EXIT_FAILURE);
		break;
	case 10:
		if (day < 0 && day > 32)
			exit(EXIT_FAILURE);
		break;
	case 11:
		if (day < 0 && day > 31)
			exit(EXIT_FAILURE);
		break;
	case 12:
		if (day < 0 && day > 32)
			exit(EXIT_FAILURE);
		break;
	};

	system("cls");
	cout << day / 10 << day % 10 << '.';
	cout << month / 10 << month % 10 << '.';
	cout << year / 1000 << (year / 100) % 10 << year / 10 % 10 << year % 10 << '\n';

	if (day <= 0 || day > 31 || month <= 0 || month > 12 || year < 0) {
		system("cls");
		cout << "fail";
		exit(EXIT_FAILURE);
	}


	if(result)
		std::cout << year << " год является високосным годом." << std::endl;
	else
		std::cout << year << " год не является високосным годом." << std::endl;

	int numberDay = days(day, month, dr, result);
	cout << "Порядковый номер дня в " << year << " году: " << numberDay << endl;

	cout << "Осталось " << birthday(year, numberDay, result) << " дней до 9 ноября." << endl;

	return 0;
}

