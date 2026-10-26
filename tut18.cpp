#include <iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int factorial(int n){
    if(n<=1){
        return 1;
        
    }
    return n*factorial(n-1);
}

int main() {
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    // cout<<"factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"the term in the fibonacci series at "<<a<<" is "<<fib(a)<<endl;
    return 0;
}