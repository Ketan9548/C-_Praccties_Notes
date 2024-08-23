#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n[] = {2,3,1,4};
    int m[] = {9,8,7};
    int a=7;
    vector<int>v;
    int j = sizeof(n)/sizeof(n[0]);
    int k = sizeof(m)/sizeof(m[0]);
    int y = v.size();
    copy(n,n+j,v);
    copy(m,m+k,v);
    sort(v.begin(),v.end());
    for(auto & element:v){
        cout<<element<<" ";
    }
    
    return 0;
}