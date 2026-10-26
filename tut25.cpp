#include <iostream>
using namespace std;

class employee
{
    int Id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "enter the Id: " << endl;
        cin >> Id;
    }
    void getId(void)
    {
        cout << "this is the id of emplyee " << Id << endl;
    }

};
int main()
{
    employee rp[4];
    for (int i = 0; i < 4; i++)
    {
        rp[i].setId();
        rp[i].getId();
    }

    return 0;
}