#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<int> v)
{
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size()-1; i++)
    {
        if (v[i + 1] != v[i] + 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> v = {1, 2, 3, 9, 5, 6, 7};
    // vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    for (int x : v)
        cout << x << endl;
    cout << "check the vector v is arragement or not: " << check(v) << endl;
    return 0;
}