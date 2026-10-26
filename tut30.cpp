#include <iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(int , int); // Constructors declaration 
         void printNumber()
    {
        cout << "Your number is: " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(int x , int y){
    a = x;
    b = y;
}
int main() {
    complex a( 4,5);
    complex b = complex(5,7);
    
    a.printNumber();
    b.printNumber();

    
    return 0;
}