#include <iostream>
using namespace std;
int binarysearching(int arr[], int n, int key)
{
    int a = 0;
    int b = n;
    int mid = (a + b) / 2;
    while (a <= b)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            b = mid - 1;
        }
        else
        {
            a = mid + 1;
        }
    }
    return -1;
};
int main()
{
    int n;
    cout<<"enetr the value of n: "<<endl;
    cin >> n;
    cout << "enter the value of array element: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int arr[] = {3,2,4,53,6};
    int key;
    cout << "enetr the finding key: " << endl;
    cin >> key;
    cout<<"the find elment is: "<<binarysearching(arr,n,key);
    return 0;
}