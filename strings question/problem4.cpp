#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "kApIlchaUhan";
    for (int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i])){
            str[i] = str[i] + 32;
        }
        else{
            str[i] = str[i] - 32;
        }
    }
    cout<<str;
    return 0;
}