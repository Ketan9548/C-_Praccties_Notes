#include <iostream>
using namespace std;
// basic of the pointer
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "the value of a is: " << *(ptr) << endl;

    // new in pointer
    int *p = new int(45);
    cout << "the value is: " << *(p) << endl;

    // allocate a block of memory using cpp
    int *arr = new int[5];
    arr[0] = 20;
    // arr[1] = 70;
    *(arr+1) = 70;
    arr[2] = 50;
    arr[3] = 30;
    arr[4] = 40;
    // delete operator
    // delete[] arr
    cout << "the value of arr[0] is: " << arr[0] << endl;
    cout << "the value of arr[1] is: " << arr[1] << endl;
    cout << "the value of arr[2] is: " << arr[2] << endl;
    cout << "the value of arr[3] is: " << arr[3] << endl;
    cout << "the value of arr[4] is: " << arr[4] << endl;

    return 0;
}