#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,0,0,0,5,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int check;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = i + 2; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    check = 1;
                }
                else
                {
                    check = 0;
                }
            }
        }
    }
    cout << check << endl;
    return 0;
}