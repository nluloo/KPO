#pragma once
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#define DICTNAMEMASSIZE 20
#define DICCTMAXSIZE 100
#define ENRYNAMEMAXSIZE 30
#define THROW01 "Create: �������� ������ ����� �������"
#define THROW02 "Create: �������� ������ ������������ ������� �������"
#define THROW03 "AddEntry: ������������ �������"
#define THROW04 "AddEntry: ������������ ��������������"
#define THROW05 "GetEntry: �� ������ �������"
#define THROW06 "DelEntry: �� ������ �������"
#define THROW07 "UpdEntry: �� ������ �������"
#define THROW08 "UpdEntry: ������������ ��������������"

namespace Dictionary {
	struct Entry
	{
		int id;
		char name[ENRYNAMEMAXSIZE];
	};
	struct Instance
	{
		char name[DICTNAMEMASSIZE];
		int maxsize;
		int size;
		Entry* dictionary;
	};
	Instance Create(const char name[DICTNAMEMASSIZE], int size);
	void AddEntry(Instance& inst, Entry ed);
	void DelEntry(Instance& inst, int id);
	void UpdEntry(Instance& inst, int id, Entry new_ed);
	Entry GetEntry(Instance inst, int id);
	void Print(Instance d);
	void Delete(Instance& d);
}