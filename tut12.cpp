#include <iostream>
using namespace std;

int main() {
    int a=3;
    int* b = &a;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of b is "<<b<<endl;
    cout<<"the value at the address b is "<<*b<<endl;

   // pointer to pointer
    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of c is "<<c<<endl;
    cout<<"the value at the address c is "<<*c<<endl;
    cout<<"the value at the address of the value at the address c is "<<**c<<endl;

    return 0;
}