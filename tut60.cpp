#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string st ="ramjeet bhai";
    string st2;
    // opening file using constractor and reading it 
    // ofstream out("ram1.txt");//write opration
    // out<<st;
    //opening file using constrator and writing it 
    ifstream in("ram2.txt");      //read opration
    // in>>st2;
    getline(in,st2);
    getline(in,st2);
    cout<<st2;

    return 0;
}