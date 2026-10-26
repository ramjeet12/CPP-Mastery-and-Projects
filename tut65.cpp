#include <iostream>
#include <string>
using namespace std;

template <class T1,class T2>
class mydata{
    public:
    T1 data1 ;
    T2 data2 ;
    mydata(T1 a,T2 b){
        data1 =a;
        data2 =b;
    }
    void display (){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main() {
    mydata<string,char> ram("ramjeet",'A');
    ram.display();
    return 0;
}