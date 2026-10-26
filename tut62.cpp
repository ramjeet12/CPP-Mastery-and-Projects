#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream out;
    out.open("ram1.txt");
    out<<"this is me\n";
    out<<"this is ram"<<endl;
    out<<"this is rohan";
    out.close();

    ifstream in;
    string b;
    in.open("ram1.txt");
    // in>>b;
    // cout<<b;
    while(in.eof() ==0 ){
        getline(in,b);
        cout<<b<<endl;
    }
    
    in.close();
    return 0;
}