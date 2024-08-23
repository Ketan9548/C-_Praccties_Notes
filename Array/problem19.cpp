#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 10, 15, 19, 20, 4, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>a)
        {
            a = arr[i];
        }
    }
    cout << a << endl;

    return 0;
}