#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string st = "nitin";
    // int n = st.length();
    // int counter;
    for (int i = 0; i < st.length(); i++)
    {
        char a = st[0];
        char b = st.length();
        if (a == b)
        {
            a++;
            b--;
        }
        else if (a != b)
        {
            cout << "not a palandrom number:" << endl;
        }
        else if (a > b)
        {
            break;
        }
    }
    cout << "the number is palandrom: " << endl;

    return 0;
}