#include <iostream>
#include <array>
using namespace std;

int main()
{
    // int n;
    array<int, 3> a = {1, 2, 3};
    array<int, 3> b = {3, 4, 5};
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a.at(i) == b.at(j))
            {
                cout << b[j] << endl;
                break;
            }
        }
    }

    return 0;
}