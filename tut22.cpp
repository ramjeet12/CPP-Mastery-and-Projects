#include <iostream>
#include <string>
using namespace std;

class binary
{
     string s;
     public:
     void read(void);
     void chk_bin(void);
     void onescomliment(void);
     void display (void);
};

 void binary :: read(void){
    cout<<"enter the value"<<endl;
    cin>>s;
   } 
  void binary :: chk_bin(void)
  {
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"incorreat binary number"<<endl;
        exit(0);
        }
    }
}   
 void binary :: onescomliment(void)
 {
    for (int i = 0; i < s.length(); i++)
     if (s.at(i)=='0'){
        (s.at(i)='1');
     }
     else if (s.at(i)=='1'){
        (s.at(i)='0');
     }
 }
void binary :: display(void)
{
    cout<<"displaying binary number";
    for (int i = 0; i < s.length(); i++){
      cout<<s.at(i);
    }
    
}


   


int main() {
    binary b; 
    b.read();
    b.chk_bin();
    b.onescomliment();
    b.display();

    return 0;
}