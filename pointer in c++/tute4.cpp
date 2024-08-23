// Pointer
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int *b = &a;
//     cout << a << endl;
//     cout << b << endl;
//     cout << &b << endl;
//     cout << *b << endl; // that called the dereferencing
//     return 0;
// }

// refrence
#include <iostream>
using namespace std;
void changevalue(int &x)
{
    x = 20;
}
int main()
{
    int y = 10;
    changevalue(y);
    cout << y << endl;
    return 0;
}