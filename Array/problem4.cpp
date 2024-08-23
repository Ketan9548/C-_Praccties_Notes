// to find the missing number in an array;
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,4,5};
    int n = 5,s = n*(n+1)/2;
    int a = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int missing_number;
    cout<<"Given array is: "<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<endl;
        sum = sum + arr[i];
    }
    missing_number = s-sum;
    cout<<"the missing number of above array is: "<<missing_number<<endl;  
    return 0;
}