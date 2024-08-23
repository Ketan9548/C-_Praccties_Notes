#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int arr[] = {7, 4, 5, 3, 9, 1, 6, 2, 8};
    // int arr[] = {7, 4, 5, 3, 9, 1, 6, 2};
    int arr[] = {2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    bool a = true;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]-arr[i+1] == -1)
        {
            a;
        }
        else
        {
            cout<<arr[i] +1;
        }
    }

    return 0;
}