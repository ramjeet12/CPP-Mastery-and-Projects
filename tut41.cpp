#include <iostream>
using namespace std;

class base1{
    protected:
        int base1int;
    public:
    void(set_base1)(int a){
    base1int = a;
    }
};
class base2{
    protected:
        int base2int;
    public:
    void(set_base2)(int a){
    base2int = a;
    }
};
class base3{
    protected:
        int base3int;
    public:
    void(set_base3)(int a){
    base3int = a;
    }
};
class derived : public base1, public base2, public base3{
   public:
   void show(){
    cout<<"The value of base1 is "<<base1int<<endl;
    cout<<"The value of base2 is "<<base2int<<endl;
    cout<<"The value of base3 is "<<base3int<<endl;
    cout<<"The sum of base1 and base2 is "<<base1int + base2int+base3int<<endl;
   }   
};
int main() {
    derived ram;
    ram.set_base1(50);
    ram.set_base2(50);
    ram.set_base3(50);
    ram.show();
    return 0;
}