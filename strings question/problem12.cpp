#include <iostream>
using namespace std;

int main()
{
    string str = "kapilk";
    int check = str[0];
    int counter = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == check)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}