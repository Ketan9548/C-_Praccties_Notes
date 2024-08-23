#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str = "kapilchauhajankaapil";
    unordered_map<char, int> a;
    for (int i = 0; i < str.size(); i++)
    {
        if (a.find(str[i]) == a.end())
        {
            a.insert(make_pair(str[i], 1));
        }
        else
        {
            a[str[i]]++;
        }
    }
    for (auto i : a)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}