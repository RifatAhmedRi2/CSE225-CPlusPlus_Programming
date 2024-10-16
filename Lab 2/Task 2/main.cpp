#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    int input;

    dynarr d1();
    dynarr d2(5);

    cout<<"Enter 5 values:"<<endl;
    for(int i=0; i<5; i++){
        cin >> input;
        d2.setValue(i, input);
    }

    cout<<"The values are:"<<endl;
    for(int i=0; i<5; i++){
        cout << d2.getValue(i) << " ";
    }

    cout << "\n\nEnter the new Array Size:" << endl;
    int size;
    cin>> size;

    dynarr d3(5);
    d3.~dynarr();
    d3.allocate(size);

    cout<<"\nEnter "<<size<<" values:"<<endl;
    for(int i=0; i<size; i++){
        cin >> input;
        d3.setValue(i, input);
    }

    cout<<"The values are:"<<endl;
    for(int i=0; i<size; i++){
        cout << d3.getValue(i) << " ";
    }

    return 0;
}

