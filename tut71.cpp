#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
        // cout<<v.at(i)<< " ";
    }
     cout<<endl;
    
}
int main() {
//  way to create a vector 
    vector <int> vec1;
        int element,size=5;
    // cout<<"Enter the size of your vectore"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter the element to add to this vector:"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    
    // vector<int>vec2
    // display(vec1);
    // vector<int> :: iterator iter =vec1.begin();
    // // vec1.insert(iter , 666);
    // display(vec1);
    vector <char> vec2(4);
    // vec2.push_back('5');
    // display(vec2);
    // vector <char> vec3(vec2);
    // display(vec3);
    vector <int>vec4(6,8);
    display(vec4);
  

    return 0;
}