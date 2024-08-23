#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    for (int i = a; i <= b; i++)
    {
        if (a%2 == 0 && b%2 == 0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
        
    }
    
    return 0;
}