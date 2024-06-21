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

	mailing_address adress1 = { 43634, "��������", "�����", "�����������", 21, "13a", 1210, "������� �.�" };

	mailing_address adress2 = { 25235, "������", "������", "�����������", 34, "1�", 132, "���-�� ���-��" };

	mailing_address adress3 = { 25235, "��������", "������", "�����������", 34, "1�", 132, "���-�� ���-��" };

	if (adress2 < adress1) cout << "������" << endl;
	else cout << "����" << endl;
	if (adress2 == adress1) cout << "������" << endl;
	else cout << "����" << endl;
	if (adress3 == adress1) cout << "������" << endl;
	else cout << "����" << endl;

	return 0;
}