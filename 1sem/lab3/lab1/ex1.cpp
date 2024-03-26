#include "stdafx.h"
#include "leapYear.h"
#include "days.h"
#include "birthday.h"
#include "monthBind.h"
#include "findDay.h"
#include "differenceDate.h"
#include "diffHours.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int day, month, year, dr = 0;
    int date, numberDay2;
    int firstDate, secondDate;
    int choise;
    bool track = false;
    bool result;

    cout << "Выберите пункт\n1.ДДММГГГГ\n2.Разница дат в днях\n3.Разница дат в часах" << endl;
    cin >> choise;

    int numberDay;

    switch (choise) {
    case 1:
        cout << "Введите дату в формате ДДММГГГГ: ";
        cin >> date;

        if (date < 0 || date > 99999999) {
            cout << "Ошибка: неверный формат даты." << endl;
            return 1;
        }

        day = (date / 10000000) * 10 + (date / 1000000) % 10;
        month = (date / 100000) % 10 * 10 + (date / 10000) % 10;
        year = date % 10000;

        if (day <= 0 || day > 31 || month <= 0 || month > 12 || year < 0) {
            cout << "fail((" << endl;
            return 1;
        }

        result = leapYear(year);

        if (result)
            cout << year << " год является високосным годом." << endl;
        else
            cout << year << " год не является високосным годом." << endl;

        numberDay = days(day, month, dr, result);
        cout << "Порядковый номер дня " << numberDay << endl;

        cout << "Осталось " << birthday(year, numberDay, result) << " дней до 9 ноября." << endl;

        month_bind(month);

        cout << "Введите порядковый номер дня в году: ";
        cin >> numberDay2;

        find_day(numberDay2, year);

        break;

    case 2:
        cout << "Введите первую дату: ";
        cin >> firstDate;
        cout << "Введите вторую дату: ";
        cin >> secondDate;

        cout << "Разница между датами в днях: " << difference_date(firstDate, secondDate) << endl;
        break;

    case 3:
        cout << "Введите первую дату: ";
        cin >> firstDate;
        cout << "Введите вторую дату: ";
        cin >> secondDate;

        if (firstDate > secondDate) {
            track = true;
        }

        cout << "Разница между датами в часах: " << diff_hours(difference_date(firstDate, secondDate), track) << endl;
        break;

    default:
        cout << "fail." << endl;
        return 1;
    }

    return 0;
}
