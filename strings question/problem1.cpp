// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;
// void reversestring(string &str)
// {
//     stack<int> puh;
//     for (char ch : str)
//         puh.push(ch);
//     for (int i = 0; i < str.length(); i++)
//     {
//         str[i] = puh.top();
//         puh.pop();
//     }
// }
// int main()
// {

//     string str = "12345 6789";
//     cout << "original string is: " << str << endl;
//     reversestring(str);
//     cout << "reverse string: " << str << endl;
//     return 0;
// }

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str = "kapil chauhan";
    cout<<"length of the string is: "<<str.length()<<endl;
    cout<<"length of the string is: "<<str.size();
    return 0;
}