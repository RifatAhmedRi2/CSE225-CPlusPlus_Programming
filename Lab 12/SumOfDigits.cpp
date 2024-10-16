#include<iostream>
#include<math.h>
using namespace std;

int sumOfDigits(int x){
    if(x==0)
        return x;
    else
        return x%10 + sumOfDigits(x/10);
}

int main(){
    int n, squared, result;

    cout<<"Enter the number: ";
    cin>>n;

    //To show the sum of digits positive regardless of
    //n being positive or negative
    if(n<0){
        squared = pow(sumOfDigits(n), 2);
        result = sqrt(squared);
        cout<<"Sum of the Digits is: "<<result<<endl;
    }
    else
        cout<<"Sum of the Digits is: "<<sumOfDigits(n)<<endl;

    return 0;
}
