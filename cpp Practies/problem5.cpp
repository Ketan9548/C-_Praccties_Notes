// armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int orignalan = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == orignalan)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not a Armstrong number" << endl;
    }

    return 0;
}