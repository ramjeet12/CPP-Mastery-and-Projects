#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;
}
int main() {
    list<int> list1;
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(3);
    list1.push_back(9);
    
    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    display(list1);
    // list1.remove(3);
    // list1.sort();
    // display(list1);
    list1.reverse();
    display(list1);
    list<int> list2(3);
    list<int>:: iterator iter;
    iter =list2.begin();
    *iter= 22;
    iter++;
    *iter= 55;
    iter++;
    *iter= 55;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"list 1 after mergeing ";
    display(list1);
    return 0;
}