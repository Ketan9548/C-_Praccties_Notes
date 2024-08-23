// Addition of the two arrays
#include<iostream>
using namespace std;
int main()
{
  int arr1[] = {3,4,5,6,6};
  int arr2[] = {5,6,6,2,1};
  int multiplies;
  for (int i = 0; i < 5; i++)
  {
      multiplies = arr1[i]+arr2[i];
      cout<<arr1[i]<<"+"<<arr2[i]<<" = "<<multiplies<<endl;
  }  
return 0;
}