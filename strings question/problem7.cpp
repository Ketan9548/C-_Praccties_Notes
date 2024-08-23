#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str = "kapil";
    int c;
    for (int i = 0; i < str.length(); i++)
    {
        c = int(str[i]);
        if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
        {
            str[i] = char(c + 1);
        }
    }
    cout << str << endl;

    return 0;
}