#include "Call.h"

int _cdecl Call::sum_cdecl(int a, int b, int c)
{
    return a + b + c;
}

int _stdcall Call::multiplication_std(int& a , int b, int c)
{
    return a * b * c;
}

int _fastcall Call::sum_fastcall(int a, int b, int c, int d)
{
    return a + b + c + d;
}
