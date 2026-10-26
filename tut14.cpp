#include <iostream>
using namespace std;

typedef struct employee
{
    int id;
    char favchar;
    float salary;
} ep;

 union money
{
    int rice; 
    char car;
    float pounds;
} ;

int main() {
    enum meal{breakfast, lunch, dinner};
    meal m1 = lunch;
    cout<<m1<<endl; 

    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    
    
    
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car<<endl;
    //    ep harry;
    // ep shubham;
    // ep rohan     
    // harry.id = 1;
    // harry.favchar = 'c';    
    // harry.salary = 120000000;
    
    // cout<<"the value of id is: "<<harry.id<<endl;
    // cout<<"the value of favchar is: "<<harry.favchar<<endl;
    // cout<<"the value of salary is: "<<harry.salary<<endl;

    
    
    
    
    
    
    
    
    
    return 0;
}