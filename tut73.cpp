#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string,int> marks;
    marks["ram"]=99;
    marks["mohan"]=33;
    marks["jack"]=0;
    marks.insert({{"rock",89},{"seman",55}});
    map<string,int>::iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is:"<<marks.size()<<endl;
    cout<<"The maxsize is:"<<marks.max_size()<<endl;
    cout<<"The empty is:"<<marks.empty()<<endl;
    return 0;
}