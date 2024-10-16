#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;

template <class ItemType>
void printSortedList(UnsortedType<ItemType> a, int listSize)
{
    ItemType x;
    ItemType temp;
    ItemType arr[listSize];

    int i, j;
    for(i=0; i<listSize; i++)
    {
        a.GetNextItem(x);
        arr[i]=x;
    }

    for(i=0; i<listSize; i++)
    {
        for(j=0; j<listSize-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0; i<listSize; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int m;
    cout << "Enter m: ";
    cin >> m;
    int arr1[m];
    cout << "Enter values of 1st sequence: ";
    for(int i=0; i<m; i++)
    {
        cin >> arr1[i];
    }
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr2[n];
    cout << "Enter values of 2nd sequence: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
    }
    UnsortedType<int> myList;
    for(int i=0; i<m; i++)
    {
        myList.InsertItem(arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        myList.InsertItem(arr2[i]);
    }
    int sizeOfList = m+n;
    cout<<"The combined and sorted sequence is: ";
    printSortedList(myList, sizeOfList);

    return 0;
}
