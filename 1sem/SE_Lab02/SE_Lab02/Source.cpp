#include <iostream>
#include <Windows.h>

using namespace std;

int sum(int x, int y) {
	return x + y;
}

int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	int n = 14;
	int X, Y, Z;
	float S;
	X = 9 + n;
	Y = 10 + n;
	Z = 11 + n;
	S = 1.0 + n;

	bool param1 = true;
	bool param2 = false;

	char fio21 = 'e';
	char fio22 = 'е';

	wchar_t fio12 = L's';
	wchar_t fio11 = L'с';

	short ex9 = X;
	short ex99 = -X;

	short sh_max = SHRT_MAX; // 0x7FFF
	short sh_min = SHRT_MIN; // 0xFF8000 (в 16-ой сис-ме старший бит от 0 до 7 - положительное / от 8 до F - отрицательное) - как и float

	unsigned short ush_max = USHRT_MAX; // 0xFFFF
	unsigned short ush_min = 0X0;

	int ex12 = Y;
	int ex122 = -Y;

	 int i_max = INT_MAX; // 0x7FFFFFFF
	 int i_min = INT_MIN; // 0xFFFFFFFF80000000

	 unsigned int ui_max = UINT_MAX; // 0xFFFFFFFF
	 unsigned int ui_min = 0x0;

	 long ex15 = Z;
	 long ex152 = -Z;

	 long l_max = LONG_MAX; // 0x7FFFFFFF
	 long l_min = LONG_MIN;// 0xFFFFFFFF80000000

	 unsigned long ul_max = ULONG_MAX; // 0xFFFFFFFF
	 unsigned long ex172 = 0x0;

	 float ex18 = S;
	 float ex182 = -S;

	 float ss = -23.625f;
	 double hh = 53253.24;

	 float f1 = ss / 0;
	 float f2 = -ss / 0;

	 float f3 = sqrt(f1);

	 double f5 = 0.7;

	 char* fio_ptr = &fio21; //0x006ffb47
	 wchar_t *fiow_ptr = &fio11; //0x006ffb20
	 short *sh_max_ptr = &sh_max; // 0x006ffafc
	 int* i_max_ptr = &i_max;// 0x006ffab4
	 float* ss_ptr = &ss; // 0x006ffa24
	 double* hh_ptr = &hh; // 0x006ffa14

	 char* ptr_fio = fio_ptr + 3; // 0x006ffb4a прибавилось 3
	 wchar_t* ptr_fiow = fiow_ptr + 3; // 0x006ffb26 2 раза прибавилось 3
	 short* ptr_sh = sh_max_ptr + 3; // 0x006ffb02 2 раза прибавилось 3
	 int* ptr_i = i_max_ptr + 3; // 0x006ffac0 4 раза прибавилось 3
	 float* ptr_ss = ss_ptr + 3; // 0x006ffa30 4 раза прибавилось 3
	 double* ptr_hh = hh_ptr + 3; // 0x006ffa2c 8 раза прибавилось 3

	 int (*f)(int, int);

	 f = sum;
	 int b = f(X, Y);

	 cout << ' ';
	return 0;
}