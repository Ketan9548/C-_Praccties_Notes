#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the value of a and b is: " << endl;
    cin >> a >> b;
    float x = ((4 * a) - b) / 2;
    if ((b & 1) || b < 2 || b <= a)
    {
        cout << "Invalid Input" << endl;
    }
    cout << "total TW is: " << x << " Total Fw is: " << a - x << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int v, w;
//     cin >> v >> w;
//     float x = ((4 * v) - w) / 2;
//     if ((w & 1) || w < 2 || w <= v)
//     {
//         cout << "INVALID INPUT";
//         return 0;
//     }
//     cout << "TW=" << x << " " << "FW=" << v - x;

// }