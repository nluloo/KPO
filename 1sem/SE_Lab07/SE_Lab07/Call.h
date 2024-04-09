#pragma once


namespace Call {
	int _cdecl sum_cdecl(int, int, int);
	int _stdcall multiplication_std(int&, int, int);
	int _fastcall sum_fastcall(int, int, int, int);
}