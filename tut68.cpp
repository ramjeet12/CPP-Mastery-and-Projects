#include <iostream>
using namespace std;

template<class T>
class ram{
    public:
    T data;
    ram(T a){
        data = a;
    }
    void display();
};
template<class T>
void ram<T> :: display(){
    cout<<data;
}
void func(int a){
    cout<<"i am first func "<<a<<endl;
}
template<class T>
void func2(T a){
    cout<<"i am tempelelized "<<a<<endl;
}
int main() {
    // ram<char>r('x') ;
    // cout<<r.data<<endl;
    // r.display();
    
    // func(5); // extat match take highist priroty 
    func2(6);
    return 0;
}