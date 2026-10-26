#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator{
    int a , b;
    public:
    void getnumebr1(){
        cout<<"Enter your number "<<endl;
        cin>>a;
        cout<<"Enter your number "<<endl;
        cin>>b;
    }
    void diplay1 (){
        cout<<"the addition of two numbers is "<<a+b<<endl;
        cout<<"the subtraction of two numbers is "<<a-b<<endl;
        cout<<"the multiplication of two numbers is "<<a*b<<endl;
        cout<<"the division of two numbers is "<<a/b<<endl;
    }
};
class scientificcalculator{
    int a , b;
    public:
    void getnumebr2(){
        cout<<"Enter your number "<<endl;
        cin>>a;
        cout<<"Enter your number "<<endl;
        cin>>b;
    }
    void diplay2 (){
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
        cout<<endl;
        cout<<"thank you for using this calculator"<<endl;
    }
};
int main() {
    hybridcalculator calc;
    calc.getnumebr1();
    calc.diplay1();
    calc.getnumebr2();
    calc.diplay2();
    calc.show();
    return 0;
}