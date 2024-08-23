// Recursion in c++
#include <iostream>
using namespace std;
// Factorial of a nmber
// 6! = 6*5*4*3*2*1 = 720
// !0 = 1 by defination
// !1 = 1 by defination
int fib(int x){
    if (x<=1)
    {
        return 1;
    }
    
    return fib(x-2) + fib(x-1);
}
int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}
int main()
{
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;
    // cout << "the factorial of " << n << " is the: " << factorial(n) << endl;
    cout << "the fibonacci sequence of the " << n << " is: " << fib(n) << endl;
    return 0;
}