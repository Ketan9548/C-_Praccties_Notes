#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string a = "abcd";
    string b = "ef";
    int m = a.length();
    int n = b.length();
    cout<<m<<" "<<n<<endl;
    cout<<a+b<<endl;
    swap(a.at(0),b.at(0));
    cout<<a<<" "<<b<<endl;
    return 0;
}