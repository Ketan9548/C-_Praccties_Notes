// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {3,4,5,6,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int a = 10;
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==a)
//         {
//             index = i;
//             break;
//         }
//     }
//     cout<<index+1<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int linearsearching(int arr[],int n, int find){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            return i+1;
        }
        
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"enetr the array element: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int find;
    cout<<"enetr the finding key: "<<endl;
    cin>>find;
    cout<<"the index is: "<<linearsearching(arr,n,find);
    return 0;
}