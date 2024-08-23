#include<iostream>
using namespace std;
int find(int arr[],int a, int n){
      int index = -1;
      for (int i = 0; i < n; i++)
      {
        if (arr[i]==a)
        {
            index = i;
            break;
        }
        else{
            // cout<<"element is not found: "<<endl;
            break;
        }
        
      }
      return index;
      
};

int main()
{
    int arr[] = {3,2,1,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a = 10;
    // cout<<"the number is: "<<a<<" found index is: "<<find(arr,a,n)<<endl;
    // cout<<find(arr,a,n);
return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {3,4,5,6,7,8};
//     int a = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < a; i++)
//     {
//         // cout<<i<<endl;
//         cout<<arr[i]<<endl;
//     }
    
// return 0;
// }