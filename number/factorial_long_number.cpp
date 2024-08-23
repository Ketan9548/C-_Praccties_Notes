#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
int factorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = (factorial * i) % mod;
    }
    return factorial;
}
int main()
{
    int n = 15;
    cout << factorial(n);
    return 0;
}