#include <iostream>
using namespace std;
void printarr(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}  
int main()
{
    int arr[] ={3,4,5,65,32,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarr(arr,n);
    return 0;
}