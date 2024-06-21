#include "stdafx.h"
#include "Dictionary.h"
#if defined(TEST_CREATE_01) + \
    defined(TEST_CREATE_02) + \
    defined(TEST_ADDENTRY_03) + \
    defined(TEST_ADDENTRY_04) + \
    defined(TEST_GETENTRY_05) + \
    defined(TEST_DELENTRY_06) + \
    defined(TEST_UPDENTRY_07) + \
    defined(TEST_UPDENTRY_08) + \
	defined(TEST_DICTIONARY) > 1
#error Ошибка: Нельзя установить более одного макроса из списка
#endif


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	try
	{

#ifdef TEST_DICTIONARY
		Dictionary::Instance d3;
		d3 = Dictionary::Create("Преподаватели", 7);
		Dictionary::Entry e11 = { 1, "Гладкий" }, e22 = { 2, "Веялкин" },
			e33 = { 3, "Смелов" }, e44 = { 4, "Урбанович" }, e55 = { 5, "Пацей" }, e66 = { 10, "Север" },e77 = {13, "Наркевич" };
		Dictionary::AddEntry(d3, e11);
		Dictionary::AddEntry(d3, e22);
		Dictionary::AddEntry(d3, e33);
		Dictionary::AddEntry(d3, e44);
		Dictionary::AddEntry(d3, e55);
		Dictionary::AddEntry(d3, e66);
		Dictionary::AddEntry(d3, e77);
		Dictionary::Entry ex22;
		ex22 = Dictionary::GetEntry(d3, 10);

		Dictionary::DelEntry(d3, 3);

		Dictionary::Entry newentry11 = { 7, "Гурин" };

		Dictionary::UpdEntry(d3, 4, newentry11);
		Dictionary::Print(d3);

		Dictionary::Instance d22 = Dictionary::Create("Студенты", 7);
		Dictionary::Entry s11 = { 1, "Иванов" }, s22 = { 2, "Петров" }, s33 = { 3, "Сидоров" }, s44 = { 4, "Иванов" }, s55 = { 5, "Лутумба" }, s66 = { 6, "Пашкевич" }, s77 = { 7, "Ковырдин" };
		Dictionary::AddEntry(d22, s11);
		Dictionary::AddEntry(d22, s22);
		Dictionary::AddEntry(d22, s33);
		Dictionary::AddEntry(d22, s44);
		Dictionary::AddEntry(d22, s55);
		Dictionary::AddEntry(d22, s66);
		Dictionary::AddEntry(d22, s77);
		Dictionary::Entry newentry33 = { 5, "Николаев" };
		Dictionary::UpdEntry(d22, 5, newentry33);
		Dictionary::Print(d22);
		Dictionary::Delete(d3);
		Delete(d22);
#else
		Dictionary::Instance d1;
#ifdef TEST_CREATE_01
		d1 = Dictionary::Create("Преподаватели", 120);
#endif

#ifdef TEST_CREATE_02
		d1 = Dictionary::Create("Преподаваasojglsjdgksdglsjdglasjdgkjsadglsaтели", 5);
#endif

		d1 = Dictionary::Create("Преподаватели", 5);
		Dictionary::Entry e1 = { 1, "Гладкий" }, e2 = { 2, "Веялкин" },
			e3 = { 3, "Смелов" }, e4 = { 4, "Урбанович" }, e5 = { 2, "Пацей" }, e6 = { 10, "Север" };
		Dictionary::AddEntry(d1, e1);
		Dictionary::AddEntry(d1, e2);
		Dictionary::AddEntry(d1, e3);
		Dictionary::AddEntry(d1, e4);


#ifdef TEST_ADDENTRY_04
		Dictionary::AddEntry(d1, e5);
#endif
		e5.id = 5;
		Dictionary::AddEntry(d1, e5);

#ifdef TEST_ADDENTRY_03
		Dictionary::AddEntry(d1, e6);
#endif

		Dictionary::Entry ex2;

#ifdef TEST_GETENTRY_05
		ex2 = Dictionary::GetEntry(d1, 15);
#endif
		ex2 = Dictionary::GetEntry(d1, 4);

#ifdef TEST_DELENTRY_06
		Dictionary::DelEntry(d1, 10);
#endif
		Dictionary::DelEntry(d1, 2);

		Dictionary::Entry newentry1 = { 6, "Гурин" };

#ifdef	TEST_UPDENTRY_07
		Dictionary::UpdEntry(d1, 10, newentry1);
#endif


#ifdef	TEST_UPDENTRY_08
		newentry1.id = 1;
		Dictionary::UpdEntry(d1, 3, newentry1);
#endif
		Dictionary::UpdEntry(d1, 3, newentry1);

		Dictionary::Print(d1);
		Dictionary::Instance d2 = Dictionary::Create("Студенты", 5);
		Dictionary::Entry s1 = { 1, "Иванов" }, s2 = { 2, "Петров" }, s3 = { 3, "Сидоров" };
		Dictionary::AddEntry(d2, s1);
		Dictionary::AddEntry(d2, s2);
		Dictionary::AddEntry(d2, s3);
		Dictionary::Entry newentry3 = { 3, "Николаев" };
		Dictionary::UpdEntry(d2, 3, newentry3);
		Dictionary::Print(d2);
		Dictionary::Delete(d1);
		Delete(d2);
#endif // TEXT_DICTIONARY
	}
	catch (const char* e)
	{
		std::cout << e << std::endl;
	};
	system("pause");
	return 0;
}