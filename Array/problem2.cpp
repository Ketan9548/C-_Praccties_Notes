// #include<iostream>
// using namespace std;

// int main()
// {
// //    int arr[] = {3,2,4,5,7,8,9};
//    int arr[] = {2,3,4,5,6,7,8,9};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int max = arr[0];
//    int max2 = arr[0];
//    int max3 = arr[0];
//    for (int i = 0; i < n; i++)
//    {
//         if (arr[i]>max)
//         {
//             max = arr[i];
//         }

//    }
//    for (int i = 0; i < n-1; i++)
//    {
//        if (arr[i]>max2)
//        {
//          max2 = arr[i];
//        }

//    }
//    for (int i = 0; i < n-2; i++)
//    {
//         if (arr[i]>max3)
//         {
//            max3 = arr[i];
//         }

//    }
//    cout<<"three lagest element is: "<<max<<" "<<max2<<" "<<max3<<endl;

// return 0;
// }

#include <iostream>
using namespace std;

int main()
{ 
    int arr[] = {3,12,30,22,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first,second,third;
    first=second=third;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if (arr[i]>second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i]>third)
        {
            third = arr[i];
        }
    }
    cout<<first<<" "<<second<<" "<<third<<endl;
    return 0;
}