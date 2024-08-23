#include <iostream>
using namespace std;
bool checkuserecursion(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restarray = checkuserecursion(arr + 1, n - 1);
    return (arr[0] < arr[1] && checkuserecursion);
}
int main()
{
    // int arr[] = {2, 3, 4, 54, 65, 766};
    int arr[] = {3,1,32,43,21,32,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << checkuserecursion(arr, n) << endl;
    return 0;
}