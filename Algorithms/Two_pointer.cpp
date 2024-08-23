// two pointer algorithms
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, -2, -3, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = 0;
    int b = n;
    int sum = 7;
    while (a < b)
    {
        sort(arr, arr + n);
        if (arr[a] + arr[b] > sum)
        {
            b--;
        }
        else if (arr[a] + arr[b] < sum)
        {
            a++;
        }
        else if (arr[a] + arr[b] == sum)
        {
            cout << "element is found" << endl;
            break;
        }
    }
    return 0;
}