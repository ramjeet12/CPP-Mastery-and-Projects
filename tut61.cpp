#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream ramout("ram1.txt");
    cout<<"enter your name ";
    string name;
    cin>>name;

    ramout<<name + " My name is " ;
    ramout.close();

    ifstream hin("ram1.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is: "<<content;
    hin.close();
    return 0;
}