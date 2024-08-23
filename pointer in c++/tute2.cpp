// Basics of pointer in c++
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    // initilizing the pointer
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout << a << endl;
    // cout << &a << endl;
    return 0;
}