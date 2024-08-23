#include <iostream>
using namespace std;
int test(int a, int b)
{
    if (a == 30 || b == 30 || (a + b) == 30)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout<<test(30,0)<<endl;
    cout<<test(20,25)<<endl;
    cout<<test(30,25)<<endl;
    return 0;
}