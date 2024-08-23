#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    int prevefact = factorial(n - 1);
    return n * prevefact;
}
int main()
{
    int n = 4;
    cout<<factorial(n)<<endl;
    return 0;
}