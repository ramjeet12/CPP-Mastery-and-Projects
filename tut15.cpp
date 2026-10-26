#include <iostream>
using namespace std;


int sum(int a, int b); // function prototype
// void g(void);
void g();

int main() {
    int num1, num2;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;
    cout<<"the sum is: "<<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a, int b){
    return a*b;
}
void g(){
    cout<<"thank you sir"<<endl;

}