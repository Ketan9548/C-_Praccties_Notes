#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // int a = 23;
    // cout<<"the value of a is: "<<a<<endl;
    // a = 45;
    // cout<<"the updated value of a is: "<<a;
    // Constant in c++
    // const int a = 65;
    // cout << "the value of a is: " << a << endl;
    // // a = 76; // this is not recommended because a is constant so it is showing the error
    // cout << "the updated value of a is: " << a;
    // Manipulators
    // int a = 54, b = 76, c= 87;
    // // without setw() manipulators
    // cout<<"the value of a without setw() is: "<<a<<endl;
    // cout<<"the value of b without setw() is: "<<b<<endl;
    // cout<<"the value of c without setw() is: "<<c<<endl;
    // // with setw() manipulators
    // cout<<"the value of a is: "<<setw(4)<<a<<endl;
    // cout<<"the value of b is: "<<setw(4)<<b<<endl;
    // cout<<"the value of c is: "<<setw(4)<<c<<endl;

    // Operator Precedence
    int a = 5, b = 8;
    int c = (((a*5)+b)-(45/3));
    cout<<"the value of c is: "<<c<<endl;
    return 0;
}