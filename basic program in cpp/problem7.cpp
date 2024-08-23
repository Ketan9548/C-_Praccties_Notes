// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {12,3,2,1,1,1,3,4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int counter1 = 0;
//     int a = arr[0];
//     // int counter2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i]+arr[i+1]+arr[i+2])/3==arr[i])
//         {
//             counter1 = i;
//             counter1 = counter1 + 2;
//         }
//         else
//         {
//             cout << "not match" << endl;
//         }
//     }
//     cout << "the value is: " << counter1;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 2, 2, 45, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int counter;
    int counter2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] - arr[j])/2 == arr[i])
            {
                counter = arr[i];
                counter2 = arr[j];
            }
        }
    }
    cout << "the value is: " << counter << " " << counter2;

    return 0;
}