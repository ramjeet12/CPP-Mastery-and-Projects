#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};

class derived : protected base{
       
 }
int main() {
    base a;
    derived d;
    cout<<d.a<<endl;
    return 0;
}