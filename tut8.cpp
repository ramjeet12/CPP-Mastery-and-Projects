#include <iostream> 
#include <iomanip>
using namespace std;

int main () {
    //int a = 35;
    //cout<<"the value of a is "<<a;
    //a = 24;
    //cout<<"the value of a is "<<a;
    
    //float a = 3.44;
    //cout<<"the value of a was"<<a<<endl;
    //a = 5;
    //cout<<"the vlue of a was "<<a<<endl;
    int a = 3, b =78, c = 1233;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<endl;
    cout<<"the value of a without  is "<<setw(4)<<a<<endl;
    cout<<"the value of without b is  "<<setw(4)<<b<<endl;
    cout<<"the value of without  c is "<<setw(4)<<c<<endl;
    return 0;
}