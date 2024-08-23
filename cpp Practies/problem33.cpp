// find the max and min value in an array
#include<iostream>
using namespace std;
void findmaxmin(int arr[], int a){
    int currentmax = arr[0];
    int currentmin = arr[0];
    for (int j = 0; j < a; j++)
    {
        if(arr[j]>currentmax){
            currentmax = arr[j];
        }
        if (arr[j]<currentmin)
        {
            currentmin = arr[j];
        }
        
    }
    cout<<"Max value is: "<<currentmax<<endl; 
    cout<<"Min Value is: "<<currentmin<<endl;
    
}
int main()
{
   int arr[6] = {3, 2, 1, 56, 1000, 167};
   findmaxmin(arr,6); 
return 0;
}