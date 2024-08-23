#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 3, 2, 7, 21, 32};
    // int mx = -19999999;
    int mx = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " " << endl;
    }

    return 0;
}