#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n==0 || n==1)
        return n;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<n<<"th Fibonacci number is: "<<Fibonacci(n)<<endl;
    return 0;
}
