#include <iostream>

using namespace std;

int main () {
    
//for (int i = 0; i <= 100; i++) {
       // cout << i << endl;
    //}
    //********example of infinite numbers*****

    //for (int i = 1; i <= 100; i++) {
    //    cout << i << endl;
    //}
    //****while loop example*****
    // int i =10;
    // while (i <= 40) {
    //     cout << i << endl;
     //    i++;
    // }

    //*****do while loop example*****
    //int i = 10;
    //do {
       // cout << i << endl;
      //  i++;
    //}while (i <= 40);
    // exersize
    //int i = 6;
    //while (i <= 60) {
    //    cout << i << endl;
    //    i += 6;
    //}
    
    int num, i = 1;
    cout<<"Enter the number to generate its multiplication table: ";
    cin>>num;
    do
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    } while (i<=10);
    

    return 0;
}