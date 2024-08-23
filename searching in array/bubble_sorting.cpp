#include <iostream>
#include <algorithm>
using namespace std;
int bubblesort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {3, 23, 43, 33, 21, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << bubblesort(arr, n) << endl;
    return 0;
}


// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int arr[] = {3, 23, 43, 33, 21, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 swap(arr[i], arr[i + 1]);
//             }
//         }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
