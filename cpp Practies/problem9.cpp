#include <iostream>
using namespace std;
// Array traversal
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[100] = {21, 32, 43, 54, 65, 65};
    display(arr, 6);
    return 0;
}