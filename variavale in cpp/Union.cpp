#include <iostream>
using namespace std;
union testcase
{
    int i;
    int j;
    int k;
};

int main()
{
    union testcase u;
    u.i = 2;
    cout << "value: " << u.j << " " << u.k << endl;
    u.k = 3;
    cout << "value: " << u.j << " " << u.k << endl;

    return 0;
}