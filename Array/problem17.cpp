#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 2, 1, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    cout << "array element is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum of the array: " << sum << endl;

    return 0;
}