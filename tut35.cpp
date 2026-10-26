#include <iostream>
using namespace std;

int count =0;

class num{
    public:
    num(){
        count++;
        cout<<"this is the time when contraction called for object number:"<<count<<endl;
    }
    ~num(){
      cout<<"this is the time when Destructor called for object number:"<<count<<endl;
      count--;
    }
};
int main() {
    cout<<" we are inside main function"<<endl;
    cout<<"creating first named n1"<<endl;
    num n1;
    {
        cout<<"entering in the block "<<endl;
        cout<<"creating a two more objects "<<endl;
        num n2,n3;
        cout<<"exiting the block "<<endl;
    }
    cout<<"back to main function"<<endl;
    return 0;
}