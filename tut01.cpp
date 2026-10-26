#include <iostream>
using namespace std;

template<class T>
class mycal{
    public:
    T a,b;
    mycal(T x, T y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"the result is "<<a*b<<endl;
    }
};
int main() {
    mycal<float>ram1(2.50,2.50);
    ram1.display();
    return 0;
}