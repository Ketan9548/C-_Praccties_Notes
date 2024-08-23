// #include <iostream>
// using namespace std;
// int check(int arr[], int n, int i, int k)
// {
//     if (i == n)
//     {
//         return -1;
//     }
//     if (arr[i] == k)
//     {
//         return i;
//     }
//     return check(arr, n, i + 1, k);
// }
// int main()
// {
//     int arr[] = {1, 3, 3, 43, 2, 1};
//     cout << check(arr, 6, 0, 2);
//     return 0;
// }

// check the last index in finding element
#include <iostream>
using namespace std;
int checklastindex(int arr[], int n, int i, int k)
{
    if (i == n)
    {
        return -1;
    }
    int restarray = checklastindex(arr, n, i + 1, k);
    if (restarray != -1)
    {
        return restarray;
    }
    if (arr[i] == k)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 43, 2, 1};
    cout << checklastindex(arr, 6, 0, 2);
    return 0;
}