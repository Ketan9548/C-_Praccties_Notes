// there are two types of header files:
// 1. System header files: it comes with the compiler
// 2. User definde header files: It is writtent by the user
// System header file
#include <iostream>
// User definde header file
#include "this.h" // if this.h is not the current directry then it is showing the error
using namespace std;
int main()
{
    int a=4, b=5;
    cout << "hellow kapil" << endl;
    cout << "operaters in c++" << endl;
    cout << "there are following types of operaters" << endl;
    // Arithemtic Operaters
    cout << "the value of a+b is: "<<a+b<<endl;
    cout << "the value of a-b is: "<<a-b<<endl;
    cout << "the value of a*b is: "<<a*b<<endl;
    cout << "the value of a/b is: "<<a/b<<endl;
    cout << "the value of a%b is: "<<a%b<<endl;
    cout << "the value of a++ is: "<<a++<<endl;
    cout << "the value of a-- is: "<<a--<<endl;
    cout << "the value of --a is: "<<--a<<endl;
    cout << "the value of b++ is: "<<b++<<endl;
    cout << "the value of b-- is: "<<b--<<endl;
    cout << "the value of --b is: "<<--b<<endl;
    cout<<endl;
    cout<<endl;
    // Assiment Operaters --> use the assing value to variables
    // int a = 3, b = 8;
    // char f = 't';

    // Comparison operators
    cout<<"the value of a==b is: "<<(a==b)<<endl;
    cout<<"the value of a!=b is: "<<(a!=b)<<endl;
    cout<<"the value of a>=b is: "<<(a>=b)<<endl;
    cout<<"the value of a<=b is: "<<(a<=b)<<endl;
    cout<<"the value of a>b is: "<<(a>b)<<endl;
    cout<<"the value of a<b is: "<<(a<=b)<<endl;
    cout<<endl;
    // logical operater
    cout<<"the value of ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"the value of ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"the value of (!(a==b)) is: "<<(!(a==b))<<endl;
    return 0;
}