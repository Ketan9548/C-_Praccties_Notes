// for iterated an string function
// begin(), end()
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "kapil";
    string ::iterator str;
    for (str = s.begin(); str != s.end(); ++str)
    {
        cout << *str<<" ";
    }
    return 0;
}