#include <iostream>

using namespace std;

int main () {
    int age;
    cout << "Enter your age: "<<endl;
    cin >> age;
    
    //if ((age < 18) && (age > 0)){ 
    //    cout << "you can't come to pary." << endl;
    //} 
    //else if (age ==18){
       // cout <<"your are a kid so you can get kid pass"<<endl;
    //} 
    //else if (age<1){
      //  cout << "Invalid age." << endl;
    //}
    
    //else{
    //    cout << "you can come to party." << endl;
    //}  
    
    // *******Switch-Case Statement**********
    switch (age) {
        case 18:
            cout << "You are 18 years old." << endl;
            break;
        case 21:
            cout << "You are 21 years old." << endl;
            break;
        case 30:
            cout << "You are 30 years old." << endl;
            break;
        default:
            cout << "Your age is not specifically handled." << endl;
    }
        cout << "Thank you for providing your age." << endl;
    
    
    
    
    
    return 0;
}