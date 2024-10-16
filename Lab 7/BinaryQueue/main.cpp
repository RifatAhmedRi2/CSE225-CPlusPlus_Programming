#include <iostream>
#include "QueType.cpp"
using namespace std;

void PrintBinaryQueue(int n)
{
    // Creating an empty queue
    QueType<string> BQ;

    // Enqueueing the first binary number “1” to the queue
    BQ.Enqueue("1");

    //Loop for generating and printing n binary numbers
    for(int i=0; i<n; i++)
    {
        //Dequeueing and printing the front value
        string str1;
        BQ.Dequeue(str1);
        cout << str1 << endl;

        //Storing str1 into str2 so that the dequeued value
        //can be used to generate the next 2 Binary numbers
        string str2 = str1;

        //Appending "0" at the dequeued value and enqueueing it
        BQ.Enqueue(str1.append("0"));

        //Appending "1" at the dequeued value and enqueueing it
        BQ.Enqueue(str2.append("1"));
    }
}

int main()
{
    int n;

    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;

    PrintBinaryQueue(n);

    return 0;
}
