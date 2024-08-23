// finding the minimum and maximum value
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2, 3, 1, 9, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Min = INT_MAX;
    int Max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        Min = min(Min, arr[i]);
        Max = max(Max, arr[i]);
    }
    cout << Min << endl;
    cout << Max << endl;

    return 0;
}