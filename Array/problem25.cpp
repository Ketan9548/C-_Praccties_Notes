#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> v;
    // int n = v.size();
    int max = a[n - 1];
    v.push_back(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            v.push_back(a[i]);
            max = a[i];
        }
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}