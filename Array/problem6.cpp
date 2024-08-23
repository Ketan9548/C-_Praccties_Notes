#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = 3;
    cout << a << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            cout << "The above element found in index: " << i << endl;
        }
    }

    return 0;
}