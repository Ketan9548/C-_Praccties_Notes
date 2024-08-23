// reverce a array using loop
// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[] = {2,3,4,5,6,7,8};
// int n = sizeof(arr)/sizeof(arr[0]);
// cout<<n<<endl;/
// for (int i = n-1; i >= 0; i--)
// {
// cout<<arr[i]<<" "<<endl;
// }
//
// return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//    int arr[] = {9,8,7,6,5,4,3,2,1};
//    int a = sizeof(arr)/sizeof(arr[0]);
//    reverse(arr,arr+a);
//    for (int i = 0; i < a; i++)
//    {
//        cout<<arr[i]<<" "<<endl;
//    }
// return 0;
// }

#include <iostream>
using namespace std;
void reverseanarray(int arr[], int s, int e){
    int temp;
    while (s<e)
    {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a = sizeof(arr) / sizeof(arr[0]);
    cout<<"before reverce an array: "<<endl;
    printarray(arr,a);
    reverseanarray(arr, 0, a-1);
    cout<<"After reverce an array: "<<endl;
    printarray(arr,a);
    return 0;
}