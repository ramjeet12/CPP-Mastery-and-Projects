#include <iostream>
using namespace std;

class bankdeposit{
    int principal;
    int year;
    float interestrate;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p , int  y , float r);
    bankdeposit(int p , int  y , int R);
    void show();

};
bankdeposit :: bankdeposit( int p , int y, float r){
    principal= p;
    year = y;
    interestrate = r;
    returnvalue= principal;
    for (int i = 0; i < y; i++)
    {
       returnvalue=returnvalue *(1+r);
    }
    
}
bankdeposit :: bankdeposit( int p , int y, int R){
    principal= p;
    year = y;
    interestrate = float(R) / 100;
    returnvalue= principal ;
    for (int i = 0; i < y; i++)
    {
       returnvalue=returnvalue *(1+interestrate);
    }
    
}
void bankdeposit:: show(){
    cout<<endl<<"the principal was "<<principal<<" and retuen value after "<<year<<" year is "
    <<returnvalue<<endl; 
}
int main() {
    bankdeposit bd1 ,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"enter the value of p ,y and r"<<endl;
    cin>>p>>y>>r;
    bd1 =bankdeposit(p,y,r);
    bd1.show();

    cout<<"enter the value of p ,y and R"<<endl;
    cin>>p>>y>>R;
    bd1 =bankdeposit(p,y,R);
    bd1.show();
    return 0;
}