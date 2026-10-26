#include <iostream>
using namespace std;

template<class T1=int , class T2 =float , class T3 =char>
class mytem{
    public:
    T1 a;
    T2 b;
    T3 c;
    mytem(T1 x,T2 y,T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display (){
        cout<<"the value of the a is :"<<a<<endl;
        cout<<"the value of the b is :"<<b<<endl;
        cout<<"My name is "<<c<<endl;
        
    }
};
int main() {
    mytem <> ram(4,1.55,'G');
    ram.display();
    mytem<float,char,char> ram2(4.88,'g','j');
    ram2.display();
    return 0;
}