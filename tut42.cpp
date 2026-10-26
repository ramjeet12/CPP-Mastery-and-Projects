#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator{
    protected:
    float a,b;
    public:
    void getnumbers1(){
        cout<< "Enter you two numbers"<<endl;
        cin>>a>>b;
    }
    void display1(){
        cout<<"the addition of two numbers is "<<a+b<<endl;
        cout<<"the subtraction of two numbers is "<<a-b<<endl;
        cout<<"the multiplication of two numbers is "<<a*b<<endl;
        cout<<"the division of two numbers is "<<a/b<<endl;
    }
};
class scientificcalculator{
    protected:
    float a,b;
    public:
    void getnumbers2(){
        cout<< "Enter you two numbers"<<endl;
        cin>>a>>b;
    }
    void display2(){
        cout<<"the power of two numbers is "<<pow(a,b)<<endl;
        cout<<"the square root of first number is "<<sqrt(a)<<endl;
        cout<<"the square root of second number is "<<sqrt(b)<<endl;
        cout<<"the sine of first number is "<<sin(a)<<endl;
        cout<<"the sine of second number is "<<sin(b)<<endl;
    }
};
class hybridcalculator : public simplecalculator, public scientificcalculator{
    public:
    void show(){
        display1();
        cout<<endl;
        display2();
    }
};
int main() {
    hybridcalculator cal;
    cal.getnumbers1();
    cal.getnumbers2();
    cal.show();



    return 0;
}