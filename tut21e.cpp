#include <iostream>
using namespace std;

class car{
    private:
        int colour, engine, wheel;
    public:
        int brand, road;
        void setdata(int colour1, int engine1, int wheel1);
        void getdata(){
            cout << "the colour of car is " << colour << endl;
            cout << "the engine of car is " << engine << endl;
            cout << "the wheel  of car is " << wheel << endl;
            cout << "the brand  of car is " << brand << endl;
            cout << "the road   of car is " << road << endl;
        }
};

void car :: setdata(int colour1, int engine1, int wheel1){
    colour = colour1;
    engine = engine1;
    wheel  = wheel1;
}

int main() {
    car supercar;
    supercar.brand = 1;
    supercar.road = 5;
    supercar.setdata(2, 500, 4);
    supercar.getdata();

    return 0;
}
//Nesting of Member Functions
// #include <iostream>
// #include <string>
// using namespace std;

// class binary
// {
//    string s;
//    public:
//      void read(void);
//      void chk_bin(void);
//      void onescompliment(void);
//      void display(void);
// };
//     void binary :: read(void){
//         cout<<"enter the value "<<endl;
//         cin>>s;
//     }
//     void binary :: chk_bin(void){
//         for (int i = 0; i < s.length(); i++)
//         {
//             if(s.at(i)!='0' && s.at(i)!='1'){
//             cout<<"incoorect binary formate"<<endl;
//             exit(0);
//             }
//         }
        
//     }

// void binary :: onescompliment(void)
// {
    
//     for (int i = 0; i < s.length(); i++)
//     {
//     if(s.at(i)=='0'){
//         (s.at(i)='1');
//     }
//     else if(s.at(i) =='1'){
//         (s.at(i)='0');
//     }  
// }


// }
// void binary :: display(void)
// {
//     cout<<"displaying your binary number"<<endl;
//     for (int i = 0; i < s.length(); i++){
//         cout<<s.at(i);
//     }
    
// }
// int main() {
//  binary b;
//  b.read();
//  b.chk_bin();
//  b.display();
//  b.onescompliment();
//  b.display();

//     return 0;
// }