#include <iostream>
using namespace std;
class A{
    public:
    int data = 10;
    void getdata(){
    cout<<"the value of data is "<<data<<endl;
    }
};
class B:virtual public A{

};
class C:virtual public A{
};
class D:public B,public C{

};
int main() {
    D start;
    start.getdata();
    return 0;
}