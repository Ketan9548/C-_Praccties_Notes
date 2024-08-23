#include <iostream>
#include <utility>
using namespace std;
void swap(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[] = {2, 1, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    swap(arr, n);
    cout << "now upadting array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
