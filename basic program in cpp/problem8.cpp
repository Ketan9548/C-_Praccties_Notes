// first patten
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";

//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 5, m = 5;
    bool c;
    if (abs((a + b + m) / 3 == a))
    {
        c = true;
    }

    cout << " " << c << " " << endl;

    return 0;
}