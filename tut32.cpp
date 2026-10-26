#include <iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
    simple( int a , int b=5){
        data1= a;
        data2 = b;

    }
    void printdata();

};
void simple :: printdata(){
    cout<<"the value of data 1 and data 2 is: "<<data1<< ","<<data2<<endl;
}
int main() {
    simple p(4);
    p.printdata();
    return 0;
}