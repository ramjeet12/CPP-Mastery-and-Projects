#include <iostream>
using namespace std;
class complex;

class calculator{
  public:
  int add( int a , int b){
  return (a + b);
 }
  int sumrealcomplex(complex,complex);
  int sumcompcomplex(complex,complex);
};
class complex{
   int a ,b;
   friend class calculator;
   public:
   void setnumber(int n1 , int n2)
   {

     a = n1;
     b = n2;
   }
   void getnumber(){
    cout<<" your number is :"<<a<<"is"<<b<<"i"<<endl;
   }

};
int calculator::sumrealcomplex(complex o1,complex o2)
{
  return( o1.a + o2.a);
}
int calculator::sumcompcomplex(complex o1,complex o2)
{
  return (o1.b + o2.b );
}
int main() {
  complex o1,o2;
  o1.setnumber( 1, 4);
  o2.setnumber( 5 , 5);

  calculator cals;
  int rac= cals.sumrealcomplex( o1, o2);
  cout<<"the real sum is:"<<rac<<endl;
  int racs = cals.sumcompcomplex( o1, o2);
  cout<<"the complex is: "<<racs<<endl;
  return 0;
}