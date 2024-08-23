#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"enter the value of c: "<<endl;
    cin>>c;
    if (c>=48 && c<=57)
    {
        cout<<"Digit";
    }
    else if (c>=65 && c<=90)
    {
        cout<<"Uppercase";
    }
    else if (c>=97 && c<=122)
    {
        cout<<"Lowercase";
    }
    else
    {
        cout<<"this is other symbol"<<endl;
    }
    return 0;
}