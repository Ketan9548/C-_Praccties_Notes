#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int c, int d)
{
    return (c < d);
}
int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    

    cout << max({a[4]},comp) << "\n";
    // cout << max({6,4,2,13},comp) << "\n";
    // cout << max({6,1,14,1},comp) << "\n";
    // cout << max({17,13,3,15},comp) << "\n";
    // cout << max({6,13,9,10},comp) << "\n";
    // cout << max({3,4,6,5},comp) << "\n";

    return 0;
}