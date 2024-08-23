#include<iostream>
using namespace std;

int main()
{
  int arr[] = {1,2,3,4};
  int a = sizeof(arr)/sizeof(arr[0]);
  for (int i = a-1; i >= 0; i--)
  {
    cout<<arr[i]<<" "<<endl;
  }
  
return 0;
}