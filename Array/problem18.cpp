#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enetr the value of the n:" << endl;
    cin >> n;
    long int arr[n];
    int sum = 0;
    cout << "enter the element of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum of the array is:" << sum;

    return 0;
}