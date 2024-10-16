#include <iostream>
#include <bits/stdc++.h>
#include "stacktype.cpp"
using namespace std;

template <class T> void Print(stackType<T> u)
{
    cout<<"Printing the stack: "<<"";
    stackType<int> tempStack;
    int n;
    while(!u.IsEmpty()){
        n = u.Top();
        tempStack.Push(n);
        u.Pop();
    }

    while(!tempStack.IsEmpty()){
        cout<<tempStack.Top()<<" ";
        tempStack.Pop();
    }
    cout<<endl;
}

void CheckFull(bool full)
{
    if (full)
        cout<<"Stack is Full"<<endl;
    else
        cout<<"Stack is not Full"<<endl;
}

void CheckEmpty(bool empty)
{
    if (empty)
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;
}

int main()
{
    //Creating a stack of integers
    stackType<int> stack;
    int n;

    //Checking if the stack is Empty
    CheckEmpty(stack.IsEmpty());

    //Pushing four items
    cout<<"Push four items: "<<"";
    for(int i =0; i<4; i++){
        cin>>n;
        stack.Push(n);
    }

    //Checking if the stack is Empty
    CheckEmpty(stack.IsEmpty());

    //Checking if the stack is Full
    CheckFull(stack.IsFull());

    //Print the values in the stack
    Print(stack);

    //Pushing another item
    cout<<"Push another item: "<<"";
    int p;
    cin>>p;
    try{
        stack.Push(p);
    }
    catch(FullStack e){
        cout<<"Stack is Full"<<endl;
    }

    //Print the values in the stack
    Print(stack);

    //Checking if the stack is Full
    CheckFull(stack.IsFull());

    //Popping two item
    for(int i=0; i<2; i++){
        try{
            stack.Pop();
        }
        catch(EmptyStack e){
            cout<<"Stack is Empty"<<endl;
        }
    }

    //Printing top item
    cout<<"Top item of the stack: "<<stack.Top()<<endl;
    Print(stack);

    return 0;
}
