#include <iostream>
using namespace std;

class employee
{
    int Id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the Id :" << endl;
        cin >> Id;
        count++;
    }
    void getdata(void)
    {

        cout << "the id of this employee is " << Id << " and this is employee number " << count << endl;
    }
    static getcount(void){
        cout<<"the value of count is "<<count<<endl;
    }

};
// this is a statci data member of class employee
int employee::count;
int main()
{
    employee ram, rohit, mohan;
    ram.setdata();
    ram.getdata();
    employee::getcount();

    rohit.setdata();
    rohit.getdata();
    employee::getcount();

    mohan.setdata();
    mohan.getdata();
    employee::getcount();
    
    return 0;
}