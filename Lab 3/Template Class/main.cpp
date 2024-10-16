#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

int main()
{
    int input, size = 5;
    dynarr<int>d1(size);

    for (int i=0; i<size; i++){
        cin>>input;
        d1.setValue(i, input);
    }

    for (int i=0; i<size; i++){
        cout<<d1.getValue(i)<<" ";
    }

    return 0;
}
