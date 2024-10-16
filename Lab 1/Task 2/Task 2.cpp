#include <iostream>

using namespace std;

int main()
{
    char **dArr;
    int row, column, i, j;

    //Taking the #of Rows (User Input)
    cout << "Enter the Number of Rows:" << endl;
    cin >> row;

    //Taking the #of Columns (User Input)
    cout << "Enter the Number of Columns:" << endl;
    cin >> column;

    //Creating a 2D Dynamic Array of Rows pointing to the Columns
    dArr = new char*[row];

    //Creating the Dynamic Array of the Columns
    for(i=0; i<row; i++){
        dArr[i] = new char[column];
    }

    //Taking the String Inputs
    cout << "\nEnter the Elements of the 2D Character Array:" << endl;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            cin >> dArr[i][j];
        }
    }

    //Printing the Strings
    cout << "\nThe given Strings are:" << endl;
    for(int i=0; i<row; i++){
        cout << dArr[i] << endl;
    }

    //De-allocating the 2D Array
    for(i=0; i<row; i++)
        delete[] dArr[i];
    delete[] dArr;

    return 0;
}

