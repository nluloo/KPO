#include <iostream>
#define ERROR_ENTRY(id, m) {id, m, {-1, -1}}
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	ERROR_ENTRY(0, "Недопустимый код ошибки");

}