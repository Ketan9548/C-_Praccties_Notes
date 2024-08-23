#include <iostream>
using namespace std;

int main()
{
    int a,n=0;
    cout<<"enter the value: ";
    cin>>a;
    while (a > 0)
    {
         n = n*10+a%10;
         n/=10;
    }
    cout<<"reverse number is:"<<n;
    
    return 0;
}