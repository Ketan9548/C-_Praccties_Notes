// Find the number is prime or not
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"it is not a prime number"<<endl;
            flag = 1;
            break;
        }       
        if (flag==0)
        {
            cout<<"this the prime number"<<endl;
        }
        
    }
    
    return 0;
}