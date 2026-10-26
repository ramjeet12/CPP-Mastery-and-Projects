#include <iostream>
using namespace std;

class A{
    int a;
    public:
    // A & setdata(int a){
    A & setdata(int a){
        this->a=a;
        // return *this;
    }
    void getdata(void){
        cout<<"the value of a is : "<<a<<endl;
    }
};
int main() {
    A b;
    // b.setdata(8).getdata();
    b.setdata(8);
    b.getdata();
    return 0;
}