#include <iostream>
#include "Call.h"

int main() {
	std::cout << "cdecl: " << Call::sum_cdecl(1, 2, 3) << std::endl;
	int a = 1;
	std::cout << "cstd: " << Call::multiplication_std(a, 2, 3) << std::endl;
	std::cout << "fastcall: " << Call::sum_fastcall(1, 2, 3, 4) << std::endl;
	return 0;
}