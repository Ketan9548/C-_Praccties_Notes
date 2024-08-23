// kadane's algorithms
#include <iostream>
using namespace std;
int kadanealgo(int arr[], int n)
{
    int maxsum = 0;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum + arr[i];
        if (currentsum > maxsum)
        {
            maxsum = currentsum;
        }
        else if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maxsum;
}
int main()
{
    int arr[] = {5, 4, -1, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << kadanealgo(arr, n);
    return 0;
}