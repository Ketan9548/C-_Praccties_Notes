// find the longest comman profix
#include <iostream>
#include <algorithm>
using namespace std;
string logestcommanprefix(string str[], int n)
{
    if (n == 0)
    {
        return "\0";
    }
    if (n == 1)
    {
        return str[0];
    }
    // use for sorting the array
    sort(str, str + n);

    int a = min(str[0].size(), str[n - 1].size());

    string first = str[0];
    string last = str[n - 1];
    int i = 0;
    while (i < a && first[i] == last[i])
    {
        i++;
    }
    string prifix = first.substr(0, i);
    return prifix;
}
int main()
{
    string str[] = {"kapil", "kamit", "kamal", "kampa"};
    int n = sizeof(str) / sizeof(str[0]);
    cout << "the longest comman prifix is: " << logestcommanprefix(str, n);
    return 0;
}