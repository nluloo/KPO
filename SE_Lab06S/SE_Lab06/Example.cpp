#include <iostream>
#include "D:\labs\���\SE_Lab06S\SE_Lab06L\Dictionary.h"
#include "windows.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try
	{
		Dictionary::Instance d3;
		d3 = Dictionary::Create("�������������", 7);
		Dictionary::Entry e11 = { 1, "�������" }, e22 = { 2, "�������" },
			e33 = { 3, "������" }, e44 = { 4, "���������" }, e55 = { 5, "�����" }, e66 = { 10, "�����" }, e77 = { 13, "��������" };
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

		Dictionary::Entry newentry11 = { 7, "�����" };
			
		Dictionary::UpdEntry(d3, 4, newentry11);
		Dictionary::Print(d3);

		Dictionary::Instance d22 = Dictionary::Create("��������", 7);
		Dictionary::Entry s11 = { 1, "������" }, s22 = { 2, "������" }, s33 = { 3, "�������" }, s44 = { 4, "������" }, s55 = { 5, "�������" }, s66 = { 6, "��������" }, s77 = { 7, "��������" };
		Dictionary::AddEntry(d22, s11);
		Dictionary::AddEntry(d22, s22);
		Dictionary::AddEntry(d22, s33);
		Dictionary::AddEntry(d22, s44);
		Dictionary::AddEntry(d22, s55);
		Dictionary::AddEntry(d22, s66);
		Dictionary::AddEntry(d22, s77);
		Dictionary::Entry newentry33 = { 5, "��������" };
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

