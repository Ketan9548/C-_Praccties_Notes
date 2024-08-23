// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int arr[] = {2,4,5,6,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" "<<endl;
//     }
//     cout<<"larget element is: "<<*max_element(arr,arr+n)<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 32, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the max element is: " << max << endl;
    return 0;
}