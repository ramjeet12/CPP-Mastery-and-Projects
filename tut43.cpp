#include <iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"who are you"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"Kya hal hai "<<endl;
    }
};
class derived:public base1, public base2{
    int a;
    public:
    void greet(){
        base1 :: greet();
    }
};
class B{
    public:
    void say(){
        cout<<"hello world "<<endl;
    }
};
class D:public B{
    int a;
    //D's new say method will overwrite base class say() method
    public:
    void say(){
        cout<<"kaise ho duniya walo "<<endl;
    }
};
int main() {
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;
    // d.greet();
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}