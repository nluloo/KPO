#include <iostream>
#include <locale>
#include <cwchar>


#include "Error.h"

int wmain(int argc, wchar_t* argv[]) {
	setlocale(LC_ALL, "ru");
	
	try
	{
		throw ERROR_THROW(100);
	}
	catch (Error::ERROR e)
	{
		std::cout << "Ошибка " << e.id << ": " << e.message << std::endl;
	}

	try
	{
		throw ERROR_THROW_IN(111, 7, 7);
	}
	catch (Error::ERROR e)
	{
		std::cout << "Ошибка " << e.id << ": " << e.message << ", строка " << e.inext.line << ", позиция " << e.inext.col << std::endl << std::endl;
	}
	system("pause");
	return 0;
}