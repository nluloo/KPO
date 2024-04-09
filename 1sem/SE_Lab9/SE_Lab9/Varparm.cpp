#include "Varparm.h"
#include <iostream>
#include <cstdarg>

int Varparm::ivarparm(int count, int parm, ...)
{
    va_list arg;
    va_start(arg, parm);
    int prev = parm;
    for (int i = 0; i < count - 1; i++) {
        prev *= va_arg(arg, int);
    }
    va_end(arg);
    return prev;
}

int Varparm::svarparm(short count, short parm, ...)
{
    va_list arg;
    va_start(arg, parm);
    int prev = parm;
    for (int i = 0; i < count - 1; i++) {
        prev *= va_arg(arg, short);
    }
    va_end(arg);
    return prev;
}

double Varparm::fvarparm(float parm, ...)
{
    va_list arg;
    va_start(arg, parm);
    float sum = 0;
    float k = parm;
    while (k != FLT_MAX) {
        sum += k;
        k = va_arg(arg, double);
    } ;
    va_end(arg);
    return sum;
}

double Varparm::dvarparm(double parm, ...)
{
    va_list arg;
    va_start(arg, parm);
    double sum = 0;
    double k = parm;
    while (k != DBL_MAX) {
        sum += k;
        k = va_arg(arg, double);
    } ;
    va_end(arg);
    return sum;
}