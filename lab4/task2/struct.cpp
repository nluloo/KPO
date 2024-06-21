#include <iostream>

using namespace std;

typedef unsigned int index;
typedef char country;
typedef char locality;
typedef char street;
typedef unsigned int house;
typedef char frame;
typedef unsigned int apartment;
typedef unsigned char owner;

struct mailing_address
{
	index ii;
	country cc[30];
	locality ll[30];
	street ss[30];
	house houseNumber;
	frame numberFrame[6];
	apartment numberApartment;
	owner oo[30];
};

static bool operator<(mailing_address& i, mailing_address& j) {
	return (i.numberApartment < j.numberApartment);
}
static bool operator==(const mailing_address& i,const mailing_address& j) {
	if (strcmp(i.cc, j.cc) == 0)
		return 1;
	else
		return 0;
}

int main() {
	setlocale(LC_ALL, "ru");

	mailing_address adress1 = { 43634, "Беларусь", "Минск", "Белорусская", 21, "13a", 1210, "Сегренёв К.С" };

	mailing_address adress2 = { 25235, "Россия", "Москва", "Моссковская", 34, "1г", 132, "Кто-то как-то" };

	mailing_address adress3 = { 25235, "Беларусь", "Москва", "Моссковская", 34, "1г", 132, "Кто-то как-то" };

	if (adress2 < adress1) cout << "истина" << endl;
	else cout << "ложь" << endl;
	if (adress2 == adress1) cout << "истина" << endl;
	else cout << "ложь" << endl;
	if (adress3 == adress1) cout << "истина" << endl;
	else cout << "ложь" << endl;

	return 0;
}