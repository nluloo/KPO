#include <iostream>
#include <locale>
#include <cwchar>

#include "Parm.h"
#include "Error.h"
#include "Log.h"

int wmain(int argc, wchar_t* argv[]) {
	setlocale(LC_ALL, "ru");
	
	try
	{
	Parm::PARM parm = Parm::getparm(argc, argv);
	std::wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << std::endl << std::endl;
	}
	catch (Error::ERROR e)
	{
		std::cout << "Ошибка " << e.id << ": " << e.message << std::endl;
	}

	system("pause");
	return 0;
}