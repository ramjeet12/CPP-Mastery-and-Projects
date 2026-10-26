#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;


int main() {
    int arr[]={1,32,35,4,12,16};
    // sort(arr,arr+6);
    sort(arr,arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;;
    }
    

    return 0;
}