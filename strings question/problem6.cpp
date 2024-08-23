#include <iostream>
#include <string.h>
using namespace std;
string updatestring(string str)
{
    int char_num;
    for (int i = 0; i < str.length(); i++)
    {
        char_num = str[i];
        // if (char_num == 122)
        // {
        //     str[i] = char(97);
        // }
        // if (char_num == 90)
        // {
        //     str[i] = char(65);
        // }
        if (char_num >= 65 && char_num <= 90 || char_num >= 97 && char_num <= 122)
        {
            str[i] = char(char_num + 1);
        }
    }
    return str;
};
int main()
{
    string str = "kapil";
    cout << "given string is " << str << endl;
    cout << "after update string is: " << updatestring(str) << endl;
    return 0;
}