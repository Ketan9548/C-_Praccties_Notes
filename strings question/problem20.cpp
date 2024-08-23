#include <iostream>
#include <string>
using namespace std;
bool checkstring(string st)
{
    for (int i = 0; i = '0'; i++)
    {
        if (st[i] < 48 || st[i] > 57)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

// bool isNumber(string st)
// {
//     int i = 0;
//     while (st[i] != '0')
//     {
//         if (st[i] < 48 || st[i] > 57)
//             return true;
//         i++;
//     }
//     return false;
// }
int main()
{
    string s = "kap21pl";
    // string s = "13321";
    // cout << isNumber(s);
    cout << checkstring(s);

    return 0;
}