#include <iostream>
using namespace std;
int deletduplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {2, 3, 7, 6, 3, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << deletduplicate(arr, n);
    return 0;
}