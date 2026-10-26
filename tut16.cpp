#include <iostream>
using namespace std;

int sum (int a, int b) {
    int c = a + b;
    return c;  
}
// void swap(int a, int b) { " this function will not swap the values of a and b in main function because it is pass by value"
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
//  Call by Reference using pointers
void swapP(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;    
}
//  Call by Reference using c++ reference variables
// int & 
swapreferencevariables (int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    // return a; // Return the reference to the first parameter
}
int main() {
    int x = 4, y = 5;
    // cout<<"the sum of 4 and 5 is sum(a,b)<<endl;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x,y);" also this one to "
    // swapP(&x,&y); this will swap a and b using call by reference using pointers
    swapreferencevariables(x,y);
    // swapreferencevariables(x,y) = 10; // this will swap a and b using call by reference using
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;

}