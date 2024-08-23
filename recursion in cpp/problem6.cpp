// #include <iostream>
// using namespace std;
// void dec(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << n << endl;
//     dec(n - 1);
// }
// int main()
// {
//     int n = 4;
//     dec(n);
//     return 0;
// }

// print the number in the incresing order
#include <iostream>
using namespace std;
void inc(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    inc(n - 1);
    cout << n << endl;
}
int main()
{
    int n = 4;
    inc(n);
    return 0;
}