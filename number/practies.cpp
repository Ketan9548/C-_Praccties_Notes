#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    while (a++ < 100)
    {
        a *= a;
        if (a < 10)
            continue;
        if (a > 50)
            break;
        cout << "name";
    }

    return 0;
}