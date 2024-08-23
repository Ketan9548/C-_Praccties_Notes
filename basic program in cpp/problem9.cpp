#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 3, 5, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int counter = 0;
    int counter2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] == arr[i + 1]) && (arr[i] == arr[i + 2]))
        {
            counter++;
        }
        else if ((arr[i] - arr[i + 1] == -1) && (arr[i] - arr[i + 2] == -2))
        {
            counter2++;
        }
    }
    cout << " " << counter << endl;
    cout << " " << counter2 << endl;
    return 0;
}