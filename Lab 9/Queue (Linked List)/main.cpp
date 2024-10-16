#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> Q;

    int x, n;
    //cout << "Enter the number of coin types: "; //x = coin types
    cin >> x;
    int a[x];
    //cout << "Enter the coin values:" << " "; //n = coin values
    for(int i=0; i<x; i++)
    {
        cin >> n;
        a[i] = n;
        Q.Enqueue(n);
    }

    int money;
    //cout << "Enter the amount of money: "; //money = total money amount
    cin >> money;

    int result, dq;
    int count = 1;

    QueType<int> temp;

    while(result != money){
        Q.Dequeue(dq);
        for(int i=0; i<x; i++){
            result = dq + a[i];
            Q.Enqueue(result);

            while(!Q.IsEmpty()){
                Q.Dequeue(result);
                temp.Enqueue(result);
                if(result == money)
                    break;
            }
            if(result == money)
                break;

            while(!temp.IsEmpty()){
                temp.Dequeue(dq);
                Q.Enqueue(dq);
            }
        }
        count++;
    }

    int tempV = 1, newCount = 0;
    while((count*3) > tempV){
        tempV = tempV * x;
        newCount++;
    }

    cout << newCount;




    ////////////////TASK - 2


    /* If we try the input 3 2 3 5 200 the outcome would be 40
    because 40 piece coins of 5 value makes a total of 200
    That's because in this program the input values of the coins
    are Enqueued after summation with all the current enqueued
    numbers and each time all the coins are summed the count
    increases and that way to reach a total of 200 5 needs to
    summed and enqueued 40 times */

    return 0;
}
