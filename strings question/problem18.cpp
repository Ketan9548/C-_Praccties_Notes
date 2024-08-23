#include <iostream>
using namespace std;
int stringcompaier(string s, string m, int a, int b)
{
    int l = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            char c = s[0];
            char d = m[0];
            if (c == d)
            {
                l = l++;
                c++;
                d++;
            }
            else
            {
                return 0;
            }
        }
    }
    cout << l;
}
int main()
{
    string s = "kapil";
    string s1 = "kapil";
    int a = s.length();
    int b = s1.length();
    stringcompaier(s, s1, a, b);

    return 0;
}