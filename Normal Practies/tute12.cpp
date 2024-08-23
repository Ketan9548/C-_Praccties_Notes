// Pointers in c++
// What is pointers --> it is the data types which holde the address of other data types
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a; // &--> Address of operaters and * --> Dereference operator
    // cout << ptr;   // it is showing the address in the ram
    // cout << *ptr;  // It is showing the value of the ram
    
    // double pointers (Pointer to pointer)
    int **c = &ptr;
    cout<<c<<endl;
    cout<<&ptr<<endl;
    cout<<**c<<endl;
    return 0;
}