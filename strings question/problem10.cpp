#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st = "kapil";
    bool flag;
    char c;
    do
    {
        flag = false;
        for (int i = 0; i < st.length() - 1; i++)
        {
            if (st[i] > st[i + 1])
            {
                c = st[i];
                st[i] = st[i + 1];
                st[i + 1] = c;
                flag = true;
            }
        }
    } while (flag);

    cout << st << endl;
    return 0;
}

// using the sort keyword by algorithm heder file
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string st = "kapil";
//     sort(st.begin(), st.end());
//     cout << st << endl;
//     return 0;
// }