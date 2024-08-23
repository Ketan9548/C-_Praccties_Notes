#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = arr[3];
    int i = 4;
    int j = i - 1;
    while (i >= 0 && j >= 0)
    {
        arr[i] = arr[j];
        i--;
        j--;
    }
    arr[i] = a;
    cout<<"shifted array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}