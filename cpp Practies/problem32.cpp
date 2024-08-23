// Reverse a array method 1
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,4,5,6};
    int a = sizeof(arr)/sizeof(arr[0]);
    for (int i = a-1; i >= 0; --i)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}
