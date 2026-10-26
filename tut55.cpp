#include <iostream>
using namespace std;

class BaseClass{
public:
    int var1;
    void display()
    {
        cout << "Displaying BaseClass variable var1 is: " << var1 << endl;
    }
};
class DerivedClass : public BaseClass{
     public:
     int var2;
     void display(){
        cout<<"displaying BaseClass variable var1 is: "<<var1<<endl;
        cout<<"displaying DerivedClass variable var2 is: "<<var2<<endl;
        
     }
 };
int main()
{
    BaseClass *base_pointer;
    BaseClass obj1;
    DerivedClass obj2;
    base_pointer = &obj2;
    base_pointer->var1 =33;
    // base_pointer->var2 = 55; // This line will cause a compilation error because base_pointer is of type BaseClass and does not have access to var2 which is a member of DerivedClass.
    base_pointer->display();

    DerivedClass *derived_pointer;
    derived_pointer = &obj2;
    derived_pointer->var1 = 77;
    derived_pointer->var2 = 44;
    derived_pointer->display();
    return 0;
}