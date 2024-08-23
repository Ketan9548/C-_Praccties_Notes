#include <iostream>
using namespace std;
int test(int a)
{
    int x = 51;
    if (a > x)
    {
        return (a - x) * 2;
    }
    else
    {
        return x - a;
    }
}
int main()
{
    cout << test(56) << endl;
    cout << test(67) << endl;
    cout << test(32) << endl;
    cout << test(24) << endl;
    return 0;
}