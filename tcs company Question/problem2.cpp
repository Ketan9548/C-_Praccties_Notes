#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {5, 2, 16, 6, 3, 4};
    // int arr[] = {7, 4, 8, 2, 9};
    int arr[] = {3,4,5,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a = arr[0];
        if (a <= arr[i])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}