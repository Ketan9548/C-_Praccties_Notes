#include <iostream>
using namespace std;
int asciivalue(char c[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << int(c[i]) << " ";
    }
}
int main()
{
    char c[] = {'w', 'e', 't', 'y', 'u', 'o'};
    int a = sizeof(c) / sizeof(*c);
    cout << asciivalue(c, a);
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     char c[] = {'k', 'l', 'i'};
//     int a = sizeof(c) / sizeof(*c);
//     for (int i = 0; i < a; i++)
//     {
//         cout << int(c[i]) << endl;
//     }

//     return 0;
// }