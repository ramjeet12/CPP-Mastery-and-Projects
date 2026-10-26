#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void) {counter =0;}
    void setprice(void);
    void displayprice(void);
   
};
void shop :: setprice(void){
    cout<<"enter the id of your item no "<<counter +1<<endl;
    cin >> itemId[counter];
    cout<<"enter the price of your item "<<endl;
    cin >> itemprice[counter];
    counter++;
}
void shop :: displayprice(void)
{
   for (int i = 0; i < counter; i++)
   {
    cout<< "The price of  " <<itemId[i]<<" is "<<itemprice[i]<<endl;
   }
    
}

int main() 
{
    shop store;
    store.initcounter();
    store.setprice();
    store.setprice();
    store.setprice();
    store.displayprice();


    return 0;
}