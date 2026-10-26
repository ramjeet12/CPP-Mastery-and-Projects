#include <iostream>
using namespace std;
class complex{
    int a , b;
    public:
    complex(int x , int y){
    a = x;
    b = y;
    } 
    complex( int x) {
        a = x;
        b =0;
    }
    complex (){
        a = 0;
        b = 0;

    }
        void printpoint(){
        cout<<"your point distance is( "<<a<<","<<b<<endl;
    }
};

int main() {
    complex c1(5 ,5);
    c1.printpoint();

    complex c2( 5);
    c2.printpoint();

    complex c3;
    c3.printpoint();
    return 0;
}