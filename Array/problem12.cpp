#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int counter = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}