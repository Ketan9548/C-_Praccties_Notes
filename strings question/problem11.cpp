#include <iostream>
using namespace std;

int main()
{
    string st = "kapil";
    int n = st.length();
    bool flag;
    char a;
    char b;
    char mid;
    for (int i = 0; i < n; i++)
    {
        a = 0;
        b = n;
        mid = (a + b) / 2;
        if (mid - 1 == mid + 1)
        {
            flag = true;
        }
        else{
            flag = false;
        }
    }
    cout << flag << endl;  
    return 0;
}