#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setnumber(int n1, int n2 ){
        a =n1;
        b =n2;
    }
    friend complex sumcomplex(complex o1,complex o2);
    void printnumber(){
        cout<<"you number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a+ o2.a),(o1.b+ o2.b));
    return o3;
}

int main() {
    complex c1, c2, sum ;
    c1.setnumber(1,4);
    c1.printnumber();
    c2.setnumber(5,8);
    c2.printnumber();
    
    sum = sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}
/*
Properties of friend functions

1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class.
   c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and needs object_name.member_name
   to access any member.
*/
/*
Properties of Friend Functions

1. A friend function is NOT a member function of the class.

2. It is declared inside the class using the 'friend' keyword,
   but it is defined outside the class like a normal function.

3. Since it is not a member of the class, it cannot be called
   using an object of the class.
   Example: c1.sumComplex()  // Invalid

4. It can be called like a normal function, without using an object.

5. A friend function can access the private and protected members
   of the class.

6. It is usually given objects as arguments to access their data.

7. A friend function can be declared in the public or private
   section of a class.

8. The 'friend' keyword is used only in the declaration,
   not in the function definition.

9. Friendship is NOT inherited by derived classes.

10. Friendship is NOT mutual automatically.
    If Class A is a friend of Class B, it does not mean
    Class B is a friend of Class A.

11. Friendship is NOT transitive.
    If A is a friend of B and B is a friend of C,
    A does not automatically become a friend of C.

12. A friend function can be a friend of more than one class.

13. It can access class members through an object/reference
    of the respective class.

Example:
class Complex {
    int real, imag;

public:
    friend void sumComplex(Complex c1, Complex c2);
};

Here, sumComplex() is a friend function and can access
private members real and imag.
*/