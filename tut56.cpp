#include <iostream>
using namespace std;

class BaseClass{
public:
    int var1=1;
    virtual void display()
    {
        cout << " 1 Displaying BaseClass variable var1 is: " << var1 << endl;
    }
};
class DerivedClass : public BaseClass{
     public:
     int var2=2;
     void display(){
        cout<<"2 displaying BaseClass variable var1 is: "<<var1<<endl;
        cout<<"2 displaying DerivedClass variable var2 is: "<<var2<<endl;
        
     }
 };

int main() {
    BaseClass *base_pointer;
    BaseClass obj1;
    DerivedClass obj2;

    base_pointer = &obj2;
    base_pointer->display();
    return 0;
}