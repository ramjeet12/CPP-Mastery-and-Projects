#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee() {}
};
class programer : public employee
{
public:
    int intercode;
    programer(int inpid)
    {
        id = inpid;
        intercode = 9;
    }
    void getData()
    {
        cout<< id << endl;
    }
};

int main(){
    employee ram(1),sharma(2);
    cout<<ram.salary<<endl;
    cout<<sharma.salary<<endl;
    programer skillf(10);
    cout<<skillf.intercode<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();

    return 0;
}