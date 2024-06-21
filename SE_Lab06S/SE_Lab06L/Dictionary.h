#pragma once
#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#define DICTNAMEMASSIZE 20
#define DICCTMAXSIZE 100
#define ENRYNAMEMAXSIZE 30
#define THROW01 "Create: превышен размер имени словаря"
#define THROW02 "Create: превышен размер максимальной емкости словаря"
#define THROW03 "AddEntry: переполнение словаря"
#define THROW04 "AddEntry: дублирование идентификатора"
#define THROW05 "GetEntry: не найден элемент"
#define THROW06 "DelEntry: не найден элемент"
#define THROW07 "UpdEntry: не найден элемент"
#define THROW08 "UpdEntry: дублирование идентификатора"

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