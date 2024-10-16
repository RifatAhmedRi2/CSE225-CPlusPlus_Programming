#include<iostream>
#include<math.h>
using namespace std;

float sumOfSeries(int n){
    if (n==0)
        return 1;
    else{
        return 1/pow(2,n)+sumOfSeries(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    printf("Sum of the Series is: %.2f", sumOfSeries(n));
    return 0;
}
