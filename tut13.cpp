#include <iostream>
using namespace std;

int main() {
    int marks [] = {23, 45, 56, 89};
    marks[2] = 455;
    
    cout<<"These are the marks:"<<endl;
    
    //  for(int i=0; i<4; i++){
        
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }
     
    
    //******while loop********
    
    
     // int i=0;
    // while(i<4){
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // }   
    
    
    // with do while loop
    int i=0;
    do{
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    }while(i<4);
  
//    pointer and array
    int* p = marks;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
   
    // cout << "The value of marks is " << *p << endl;
    // cout << "The value of marks is " << *(p+1) << endl;
    // cout << "The value of marks is " << *(p+2) << endl;
    // cout << "The value of marks is " << *(p+3) << endl;



    return 0;
}