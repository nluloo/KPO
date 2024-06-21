#include <iostream>
#include "D:\labs\кпо\SE_Lab06S\SE_Lab06L\Dictionary.h"
#include "windows.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try
	{
		Dictionary::Instance d3;
		d3 = Dictionary::Create("Преподаватели", 7);
		Dictionary::Entry e11 = { 1, "Гладкий" }, e22 = { 2, "Веялкин" },
			e33 = { 3, "Смелов" }, e44 = { 4, "Урбанович" }, e55 = { 5, "Пацей" }, e66 = { 10, "Север" }, e77 = { 13, "Наркевич" };
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
	}
	catch (const char *e)
	{
		cout << e << endl;
	}

	return 0;
}

