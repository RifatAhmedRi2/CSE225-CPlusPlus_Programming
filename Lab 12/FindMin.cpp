#include <iostream>
using namespace std;

int findMin(int a[], int size)
{
    if (size == 1)
        return a[0];
    else
    {
        int min = findMin(a+1,size-1);
        if (min < a[0])
            return min;
        else
            return a[0];
    }
}

int main ()
{
    int a[] = {-5,0,99,100,0,1,2,5,200};
    int arrSize = sizeof(a)/sizeof(a[0]);
    cout<<"Minimum Element is: "<<findMin(a, arrSize)<<endl;
    return 0;
}
