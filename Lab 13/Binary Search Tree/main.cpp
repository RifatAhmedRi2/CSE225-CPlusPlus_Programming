#include <iostream>
#include "binarysearchtree.cpp"
using namespace std;

void checkEmpty(bool b){
    if(b)
        cout<<"Tree is Empty"<<endl;
    else
        cout<<"Tree is not Empty"<<endl;
}

void checkFull(bool b){
    if(b)
        cout<<"Tree is Full"<<endl;
    else
        cout<<"Tree is not Full"<<endl;
}

template <class T> void RetrieveNow(TreeType<T> tr, T item)
{
    bool found = false;
    tr.RetrieveItem(item, found);
    if(found == true)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;
}

int main()
{
    TreeType<int> tree;

    checkEmpty(tree.IsEmpty());

    cout<<"Insert ten items: ";
    for(int i=0; i<10; i++){
        int a;
        cin>>a;
        tree.InsertItem(a);
    }

    checkEmpty(tree.IsEmpty());

    cout<<"Length of the Tree: "<<tree.LengthIs()<<endl;

    int item = 9;
    bool found = true;
    tree.RetrieveItem(item,found);
    if(found==true)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    item = 13;
    tree.RetrieveItem(item,found);
    if(found==true)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    //RetrieveNow(tree, item); //For some reason the program terminates

    //tree.Print(); //Print In Order

    tree.ResetTree (IN_ORDER);
    bool finish = 0;
    while(!finish){
        int value;
        tree.GetNextItem(value, IN_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    tree.ResetTree(PRE_ORDER);
    finish = 0;
    while(!finish){
        int value;
        tree.GetNextItem(value, PRE_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    tree.ResetTree(POST_ORDER);
    finish = 0;
    while(!finish){
        int value;
        tree.GetNextItem(value, POST_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    tree.~TreeType();
    //tree.MakeEmpty(); //Alt for Destructor fucntion
    checkEmpty(tree.IsEmpty());
    cout << endl;
    return 0;
}
