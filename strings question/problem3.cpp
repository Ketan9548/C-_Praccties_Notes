#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str = "kapil";
    char a;
    for (int i = 0; i < str.length(); i++)
    {
        a = str[i];
        str[i] = toupper(a);
    }
    cout<<str;
    
    return 0;
}