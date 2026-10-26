#include <iostream>
using namespace std;
template <class T>
class myplus{
  public:
    T a = 1;
    T b= 2.5;
    void display(){
    cout<<"the sum of this "<<a*b<<endl;
    }
};
int main(){
  myplus<int>ram;
  ram.display();

  myplus<float>ram1;
  ram1.display();

  myplus<double>ram2;
  ram2.display();
  return 0;
}