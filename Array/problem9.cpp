#include <iostream>
using namespace std;
bool test(int arr[], int n)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        count = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (count == arr[j])
            {
                return true;
            }
        }
        count++;
    }
    return false;
}
int main()
{
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "check value is: " << test(arr, n);
    return 0;
}