#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;
    v.resize(n);
    cout << "enter the element is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (auto & element : v)
    {
        cout << element << " ";
    }

    return 0;
}