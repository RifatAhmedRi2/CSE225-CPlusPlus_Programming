#include "dynarr2d.h"
#include <iostream>
using namespace std;

//Empty Constructor
dynarr2d::dynarr2d(){
    data = NULL;
    row = 0;
    col = 0;
}
//Constructor
dynarr2d::dynarr2d(int r, int c){
    data = new int*[r];
    row = r;
    col = c;

    for(int i=0; i<row; i++){
        data [i] = new int[c];
    }
}
//Destructor
dynarr2d::~dynarr2d(){
    for(int i=0; i<row; i++)
        delete[] data[i];
    delete[] data;
}
//Getter
int dynarr2d::getValue(int row, int col){
    return data[row][col];
}
//Setter
void dynarr2d::setValue(int row, int col, int value){
    data[row][col] = value;
}
