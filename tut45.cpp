#include <iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"your roll number is "<<roll_no<<endl;
    }
};
class test : virtual public student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1 , float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"your result is here: "<<endl
            <<"maths "<<maths<<endl
            <<"physics "<<physics<<endl;
    }
};

class sport: virtual public student{
    protected:
    float sccore;
    public:
    void set_sccore(float sc){
        sccore= sc;

    }
    void print_sccore(void){
        cout<<"this is your PT sccore: "<<sccore<<endl;
    }

};
class result: public test, public sport{
    protected:
    float total;
    public:
    void display(void){
        total = maths + physics + sccore;
        print_number();
        print_marks();
        print_sccore();
        cout<<"your total is : "<<total<<endl;
    }
};
int main() {
    result ram;
    ram.set_number(2001);
    ram.set_marks(70.50,80.50);
    ram.set_sccore(9);
    ram.display();
    return 0;
}