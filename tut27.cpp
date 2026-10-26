#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumcompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // indivisoly declarring a fuction as freind
    friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator::sumcompComplex(Complex o1, Complex o2);
    // aliter: declaring the enteerir calulator as a friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is: " << a << "+" << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumcompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 8);
    Calculator calc;
    int rac = calc.sumRealComplex(o1, o2);
    cout << "the of real part of o1 and o2 " << rac << endl;
    int rasc = calc.sumcompComplex(o1, o2);
    cout << "the of comp part of o1 and o2 " << rasc << endl;
    return 0;
}
// #include <iostream>
// using namespace std;
// class complex;

// class calcultor
// {
// public:
//   int sumreal(complex, complex);
//   int sumcomp(complex, complex);
// };
// class complex
// {
//   int a, b;
//   friend class calcultor;

// public:
//   void setnumber(int v1, int v2)
//   {
//     a = v1;
//     b = v2;
//   }
//   void printnumber()
//   {
//     cout << " Number:" << a << "+" << b << "i" << endl;
//   }
// };
// int calcultor::sumreal(complex o1, complex o2)
// {

//   return (o1.a + o2.a);
// }
// int calcultor::sumcomp(complex o1, complex o2)
// {
//   return (o1.b + o2.b);
// }
// int main()
// {
//   complex o1, o2;
//   o1.setnumber(1, 4);
//   o2.setnumber(4, 7);

//   calcultor carl;
//   int realSum = carl.sumreal(o1, o2);
//   int compSum = carl.sumcomp(o1, o2);

//   cout << " real part sum: " << realSum << endl;
//   cout << " comp part sum: " << compSum << endl;

//   return 0;
// }