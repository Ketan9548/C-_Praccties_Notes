#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-1, 0, 1, 2, -1, -4};
    // int arr[] = {-4, -1, -1, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int counter = 0;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = 1; j < n-1; j++)
        {
            for (int k = 2; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    // break;
                    // counter++;
                }
            }
        }
    }
    // cout << counter << endl;

    return 0;
}