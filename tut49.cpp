// Initialization list in Constructors in Cpp
#include <iostream>
using namespace std;

class book{
    int x ;
    int y ;
    public:
    book(int a, int b):x(a),y(b){
   // book(int a, int b):y(b),x(a+x){ this will creat problem in program becuse its exicute into proper line 
        cout<<"here Initialization list in Constructors in Cpp happed "<<endl;
        cout<<"the value of x is "<<x<<endl;
        cout<<"the value of y is "<<y<<endl;
    }
};
int main() {
    book ram(2,5);
    return 0;
}