#include <iostream>
#include"dynarr2d.h"

using namespace std;

int main()
{
    int row, col;
    cout << "Enter the Row Size:" << " ";
    cin>> row;
    cout << "Enter the Column Size:" << " ";
    cin>> col;

    dynarr2d d(row, col);//Creating the 2D array with user defined row and columns

    cout<<"\nEnter the Values:"<<endl; //Taking Inputs
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int value;
            cin>> value;
            d.setValue(i, j, value);
        }
    }

    cout<<"\nThe Values are:"<<endl; //Printing Values
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<d.getValue(i,j)<<" ";
        }
    }

    return 0;
}

