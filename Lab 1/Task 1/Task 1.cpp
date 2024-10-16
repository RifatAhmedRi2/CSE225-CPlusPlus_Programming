#include <iostream>

using namespace std;

int main()
{
    int *dArr, size;

    cout << "Enter the Array Size:" << endl;
    cin >> size; //Taking the Size of the Array (User Input)
    dArr = new int[size]; //Creating a Dynamic Array

    cout << "\nEnter the Array Elements:" << endl;
    for(int i=0; i<size; i++){
        cin >> dArr[i]; //Taking the Array Inputs
    }

    cout << "\nThe Array Elements are:" << endl;
    for(int i=0; i<size; i++){
        cout << dArr[i] << endl; //Printing the Array Elements
    }

    delete[] dArr; //De-allocating the Array
    dArr = NULL; //Rewriting the Garbage Values to Null

    return 0;
}

