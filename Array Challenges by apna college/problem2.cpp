#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 53, 2, 12, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int multiplication = 1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        multiplication = multiplication * arr[i];
    }
    cout << "the sum of the number: " << sum << endl;
    cout << "the multiplication of the number is: " << multiplication << endl;

    return 0;
}