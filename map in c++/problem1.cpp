#include <iostream>
#include <map>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int nums1[] = {3, 4, 5};
    int n2 = sizeof(nums1) / sizeof(nums1[0]);
    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        a[nums[i]]++;
    }

    for (int i = 0; i < n2; i++)
    {
        for (auto j : a)
        {
            if (j.first == nums1[i])
            {
                cout << j.first << endl;
            }
        }
    }

    return 0;
}