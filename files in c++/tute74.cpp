#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
// we have to sorted an array using the function object
int main()
{
    // function object (functor) : it is wrapped in a class
    // that it avaliable like an object () {objects: (car, employee, customar)}
    // int arr[] = {1,32,14,10,20,50};
    // sort(arr, arr+6);
    // sort(arr,arr+6,greater<int>());
    // for (int i = 0; i < 6; i++)
    // {
        // cout<<arr[i]<<" ";
    // }

    int a[] = {10,7,20,9,40,8,50};
    int b[] = {10,7,8,9};
    sort(a,a+7,less<int>());
    sort(b,b+4,less<int>());
    if (includes((a),a+4,b,b+4,less<int>()))
    {
        cout<<"ture\n";
    }
    
    
    return 0;
}