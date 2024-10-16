#include <iostream>
#include <complex.h>
#include <complex.cpp>

using namespace std;

int main()
{
    complex c1(5.0, 0.1);
    complex c2(5.0, 0.1);
    complex c3();

    c3=c1*c2;
    c3.Print();

    cout<<c1!=c2<<endl;

    return 0;
}
