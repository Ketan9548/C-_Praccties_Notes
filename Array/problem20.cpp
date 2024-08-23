#include <iostream>
using namespace std;

int main()
{
    int arr[] = {32, 1, 4, 5, 3, 2, 12, 87};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    cout << "the array element is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "the sum of the array is: " << sum << endl;

    return 0;
}