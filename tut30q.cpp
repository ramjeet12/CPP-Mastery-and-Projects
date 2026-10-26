#include <iostream>
#include <cmath>
using namespace std;

class point{
    int a , b;
    friend double distance(point p1, point p2);
    public:
    point (int x ,int y){
        a = x;
        b = y;
    }

    void printpoint(){
        cout<<"your point distance is( "<<a<<","<<b<<endl;
    }
};
double distance(point p1, point p2){
    double dist =sqrt(pow((p2.a - p1.a), 2) + pow((p2.b - p1.b),2));
    return dist;
}
int main() {
    point p1( 1, 0);
    point p2( 1 ,0 );
    cout<<"distnace of 1:"<<distance(p1,p2)<<endl;

    point p3( 0, 1);
    point p4( 0 ,6 );
    cout<<"distnace of 2:"<<distance(p3,p4)<<endl;

    point p5( 1, 5);
    point p6( 1 ,2 );
    cout<<"distnace of 3:"<<distance(p5,p6)<<endl;

    return 0;
}