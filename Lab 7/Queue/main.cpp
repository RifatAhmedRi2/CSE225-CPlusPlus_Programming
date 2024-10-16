#include <iostream>
#include "QueType.h"
#include "QueType.cpp"
using namespace std;

void checkEmpty(bool b) {
    if(b)
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
}

void checkFull(bool b) {
    if(b)
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;
}

void Print(QueType<int> Q){
    QueType<int> temp;

    while(!Q.IsEmpty()){
        int a;
        Q.Dequeue(a);
        temp.Enqueue(a);
        cout << a << " ";
    }
    cout << endl;
    Q = temp;
}

int main()
{
    QueType<int> Q(5);

    checkEmpty(Q.IsEmpty());

    //Inserting element
    Q.Enqueue(5);
    Q.Enqueue(7);
    Q.Enqueue(4);
    Q.Enqueue(2);

    checkEmpty(Q.IsEmpty());
    checkFull(Q.IsFull());

    Q.Enqueue(6);
    Print(Q);

    checkFull(Q.IsFull());

    if(!Q.IsFull())
        Q.Enqueue(8);
    else
        cout << "Queue Overflow" << endl;

    //Taking an element out of the queue
    int d;
    Q.Dequeue(d);
    Q.Dequeue(d);
    Print(Q);

    Q.Dequeue(d);
    Q.Dequeue(d);
    Q.Dequeue(d);
    checkEmpty(Q.IsEmpty());

    if(!Q.IsEmpty())
        Q.Dequeue(d);
    else
        cout << "Queue Underflow" << endl;

    return 0;
}
