#include <iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a = num;
    }
    number(number &obj){
        cout<<"Copy Constructor called"<<endl;
        a = obj.a;
    }
    void display(){
        cout<<"the value of this object is "<<a<<endl;
    }
};
int main(){
    number x ,y ,z(4),z2;
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();
    
    z2=z;
    z1.display();
    number x3= z; 
    z1.display();
    return 0;
}