// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[] = {3,42,123,432,322};
//     int size = sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[] = {4,6,32,1,323};
//     for (int i = 0; i < size; i++)
//     {
//              cout<<arr1[i]<<endl;
//         // for (int j = 0; j <= arr2[6]; j++)
//         // {
//         //     cout<<arr2[j]<<endl;
//         // }

//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
   int arr[5];
   cout<<"enter the value of arr: "<<endl;
   for (int i = 0; i < 5; i++)
   {
       
       cin>>arr[i];
   }
   // display arr
   cout<<"display the arr: "<<endl;
   for (int i = 0; i < 5; i++)
   {
       
       cout<<arr[i]<<" ";
   }
   
    return 0;
}