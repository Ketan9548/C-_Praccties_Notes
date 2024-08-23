// Return reverse iterator to reverse beginning function
// rbegin(), rend()
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str("kapil is my name..");
    for (string::reverse_iterator rit = str.rbegin(); rit != str.rend(); ++rit)
        cout << *rit;
    return 0;
}