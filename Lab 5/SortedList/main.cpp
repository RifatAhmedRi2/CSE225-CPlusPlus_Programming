#include <iostream>
#include "SortedType.cpp"

using namespace std;

template <class T>
void Print(SortedType<T> u)
{
    cout<<"Printing the list: ";
    for(int i=0; i<u.LengthIs(); i++)
    {
        T x;
        u.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<endl;
}

template <class T>
void Retrieve(SortedType<T> u, T value)
{
    bool found = false;
    u.RetrieveItem(value, found);
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
    int n;
    //Creating a list of size 5
    SortedType<int> sortedList;

    //Printing the length of list
    cout<<"Length of the list: "<<"";
    cout<<sortedList.LengthIs()<<endl;

    //Inserting five items
    cout<<"Insert five items: "<<"";
    for(int i=0; i<5; i++)
    {
        cin>>n;
        sortedList.InsertItem(n);
    }

    //Printing the list
    Print(sortedList);

    //Retrieving and printing whether found or not
    Retrieve(sortedList, 6);
    Retrieve(sortedList, 5);

    //Printing if the list is full or not
    CheckFull(sortedList.IsFull());

    //Deleting 1
    sortedList.DeleteItem(1);

    //Printing the list
    Print(sortedList);

    //Printing if the list is full or not
    CheckFull(sortedList.IsFull());

    return 0;
}
