#include <iostream>
using namespace std;

class complex{
    int real , imag;
    public:
    void getdata(){
        cout<<"the real part is : "<<real<<endl;
        cout<<"the imaginary part is : "<<imag<<endl;
    }
    void setdata(int a, int b){
        real = a;
        imag = b;   
    }
};
int main() {
    // complex c1;
    complex *ptr = new complex;
    (*ptr).setdata(5,56);
    (*ptr).getdata();

    complex *ptr1 = new complex;
    ptr1->setdata(60,67);
    ptr1->getdata();
    return 0;
}
//  notes 
// #include <iostream>
// using namespace std;

// int main() {
//     // 1. 'new' ne memory (Heap) me ek int jitni jagah banayi aur usme 500 rakh diya.
//     // Us jagah ka koi naam nahi hai, bas uski chabi 'p' ko de di.
//     int* p = new int(500); 

//     // Ab hum 'p' ki madad se us bina naam wale room ke andar dekh sakte hain
//     cout << "Address: " << p << endl;       // Output: Memory address (e.g., 0x5555...)
//     cout << "Value inside: " << *p << endl; // Output: 500

//     // 2. Tum chaho toh chabi se andar ki value badal bhi sakte ho
//     *p = 999;
//     cout << "New Value: " << *p << endl;    // Output: 999

//     // 3. Sabse Important Step: ROOM KHALI KARNA (delete)
//     // Kyunki yeh room humne 'new' bol kar liya tha, compiler isko apne aap saaf nahi karega.
//     // Agar delete nahi kiya, toh ise 'Memory Leak' kehte hain (Laptop ki RAM bharti jayegi).
//     delete p; 

//     // WARNING: delete karne ke baad 'p' abhi bhi usi address ko point kar raha hai, 
//     // par wahan ka saaman destroy ho chuka hai. Isko kehte hain 'Dangling Pointer'.
//     // Isliye safe rehne ke liye pointer ko khali (nullptr) kar do:
//     p = nullptr; 

//     return 0;
// }
