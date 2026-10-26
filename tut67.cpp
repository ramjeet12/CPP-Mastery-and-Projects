#include <iostream>
using namespace std;

// float funcave (int a, float b){
//     float ave = (a+b)/2.00;
//     return ave;
// }
template<class T>
void swapp(T &a ,T &b){
    T temp = a;
    a = b;
    b = temp;
}

template<class T1, class T2>
float funcave (T1 a, T2 b){
    float ave = (a+b)/2.00;
    return ave;
}
int main() {
    float a;
    a =funcave (10,5.50);
    cout<<"the value of this number "<<a<<endl;
    int x =5 , y = 8;
    swapp( x, y);
    cout<<x<<endl<<y;

    return 0;
}