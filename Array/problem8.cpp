// #include <iostream>
// using namespace std;
// int mostfrequentlyelement(int arr[], int n)
// {
//     int maxcount = 0;
//     int elementis;
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] = arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count > maxcount)
//         {
//             maxcount = count;
//             elementis = arr[i];
//         }
//     }
//     return elementis;
// }
// int main()
// {
//     int arr[] = {2, 3, 4, 5, 6, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "the array is: " << arr[i] << endl;
//     }

//     cout << "the max element is: " << mostfrequentlyelement(arr, n);
//     return 0;
// }

// using map

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int mostfrequentyly(int arr[], int n)
{
    unordered_map<int, int> most_repetated;
    for (int i = 0; i < n; i++)
    {
        most_repetated[arr[i]]++;
    }
    int max_count = 0;
    int res = -1;
    for (auto i : most_repetated)
    {
        if (max_count < i.second)
        {
            res = i.first;
            max_count = i.second;
        }
    }
    return res;
};
int main()
{
    int arr[] = {32, 30, 34, 35, 32, 38};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << "the given array is: " << arr[i] << endl;
    }

    cout << "the max number repeated is: " << mostfrequentyly(arr, n);

    return 0;
}