#include <iostream>
#include <complexNumber.h>
#include <complexNumber.cpp>

using namespace std;

int main()
{
    complexNumber object1(10);
    complexNumber object2(20);
    complexNumber object3;

    object3 = object1 + object2;

    cout<<object3.num<<endl;

    return 0;
}
