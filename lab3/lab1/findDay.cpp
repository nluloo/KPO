#include "findDay.h"

enum nameMonth {
	ﬂÕ¬¿–‹ = 1, ‘≈¬–¿À‹, Ã¿–“, ¿œ–≈À‹, Ã¿…, »ﬁÕ‹, »ﬁÀ‹, ¿¬√”—“, —≈Õ“ﬂ¡–‹, Œ “ﬂ¡–‹, ÕŒﬂ¡–‹, ƒ≈ ¿¡–‹
};

void find_day(int numberDay, int year)
{
	int month[13] = {0, 31, 28, 31,30,31,30,31,31,30,31,30,31 };
	int i = 1;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		month[2] = 29;
		while (numberDay > month[i]) {
			numberDay -= month[i];
			i++;
		}

		if (i == Ã¿–“ && numberDay == 8) {
			std::cout << "— 8 Ï‡Ú‡!!" << std::endl;
		}
		if (i == —≈Õ“ﬂ¡–‹ && (numberDay == 12 || numberDay == 13)) {
			std::cout << "— ‰ÌÂÏ ÔÓ„‡ÏÏËÒÚ‡!!" << std::endl;
		}
		if (i == ƒ≈ ¿¡–‹ && numberDay == 31) {
			std::cout << "ÕÓ‚˚È „Ó‰!!" << std::endl;
		}
}
