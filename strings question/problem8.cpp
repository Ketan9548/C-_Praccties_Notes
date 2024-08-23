#include <iostream>
using namespace std;

int main()
{
    string str = "kapeilo";
    int counter = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}