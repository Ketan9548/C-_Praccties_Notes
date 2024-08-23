// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;
// bool checkanagram(map<char, int> v, map<char, int> v1)
// {
//     for (auto m : v)
//     {
//         for (auto l : v1)
//         {
//             if (m.second == l.second)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     string str1 = "book";
//     string str2 = "kob";
//     map<char, int> n1;
//     map<char, int> n2;

//     for (char f : str1)
//     {
//         n1[f]++;
//     }
//     for (char g : str2)
//     {
//         n2[g]++;
//     }

//     bool ans = checkanagram(n1, n2);
//     if (ans)
//     {
//         cout << "it is anagram:" << endl;
//     }
//     else
//     {
//         cout << "not a anagram:" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <map>
#include <string>
using namespace std;

bool checkAnagram(const map<char, int> &map1, const map<char, int> &map2)
{
    if (map1.size() != map2.size())
        return false;

    for (const auto &pair : map1)
    {
        char character = pair.first;
        int frequency = pair.second;

        if (map2.find(character) == map2.end() || map2.at(character) != frequency)
            return false;
    }

    return true;
}

int main()
{
    string str1 = "book";
    string str2 = "kob";
    map<char, int> n1;
    map<char, int> n2;

    for (char f : str1)
    {
        n1[f]++;
    }

    for (char g : str2)
    {
        n2[g]++;
    }

    bool ans = checkAnagram(n1, n2);
    if (ans)
    {
        cout << "It is an anagram." << endl;
    }
    else
    {
        cout << "It is not an anagram." << endl;
    }

    return 0;
}
