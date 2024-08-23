#include <iostream>
using namespace std;

// Function Prototype
// Type function-name (argument);
// int sum(int a, int b); //--> it is acceptabal // this is the function prototyping
// int sum(int a,b); //--> it is not acceptabal
int sum(int, int); //--> it is acceptabal
void g(void);
int main()
{
    int num1, num2;
    // num1, num2 is actual parameters
    cout << "enter the value of num1: " << endl;
    cin >> num1;
    cout << "enter the value of num2: " << endl;
    cin >> num2;
    cout << "the sum of num1 and num2 is: " << sum(num1, num2); // call the sum function
    g();
    return 0;
}

int sum(int a, int b)
{
    // a and b is formal parameters
    int c = a + b;
    return c;
}

void g()
{
    cout << "\nhellow good morning" << endl;
}