#include "complex.h"
#include <iostream>
using namespace std;

complex::complex()
{
    Real = 0;
    Imaginary = 0;
}

complex::complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}

complex complex::operator+(complex a)
{
    complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

complex complex::operator*(complex a)
{
    complex t;
    t.Real = Real * a.Real - Imaginary * a.Imaginary;
    t.Imaginary = Real * a.Imaginary + a.Real * Imaginary;
    return t;
}

bool complex::operator!=(complex a)
{
    if (Real != a.Real || Imaginary != a.Imaginary)
        return true;
    else if (Real == a.Real || Imaginary == a.Imaginary)
        return false;
}

void complex::Print()
{
    cout << Real << endl;
    cout << Imaginary << endl;
}
