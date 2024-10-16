#include <bits/stdc++.h>
#include "unsortedtype.cpp"
#include <string>

using namespace std;

template <class T> void Print(UnsortedType<T> u)
{
    cout<<"Printing the list: ";
    for(int i=0; i<u.LengthIs(); i++){
        T x;
        u.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<endl;
}

template <class T> void Retrieve(UnsortedType<T> u, T item)
{
    bool found = false;
    u.RetrieveItem(item, found);
    if(found == true)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;
}

void CheckFull(bool full)
{
    if (full)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;
}

int main()
{
    //Creating a list of integers
    UnsortedType<int> unsortedList;

    //inserting four items
    int n, item;
    cout<<"Insert four items: "<<"";
    for(int i=0; i<4; i++)
    {
        cin>>n;
        unsortedList.InsertItem(n);
    }

    //Printing the list
    Print(unsortedList);
    //Print(unsortedList);

    //Printing the length of the list
    cout<<"Length of list is "<<unsortedList.LengthIs()<<endl;

    //Inserting one item
    cout<<"Insert one item: "<<"";
    cin>>n;
    unsortedList.InsertItem(n);

    //Printing the list
    Print(unsortedList);

    //Retrieving and printing whether the items are found or not
    Retrieve(unsortedList, 4);
    Retrieve(unsortedList, 5);
    Retrieve(unsortedList, 9);
    Retrieve(unsortedList, 10);

    //Checking if the list is full or not
    CheckFull(unsortedList.IsFull());

    //Deleting one item
    unsortedList.DeleteItem(5);

    //Checking if the list is full or not
    CheckFull(unsortedList.IsFull());

    //Deleting one item
    unsortedList.DeleteItem(1);

    //Printing the list
    Print(unsortedList);

    //Deleting one item
    unsortedList.DeleteItem(6);

    //Printing the list
    Print(unsortedList);

    return 0;
}
