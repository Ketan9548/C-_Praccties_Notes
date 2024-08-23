#include<iostream>
#include<vector>
using namespace std;

int main()
{
auto a = {2,3,4,5};
vector<int> v(a);
// int a = sizeof(arr)/sizeof(arr[0]);
cout<<v.front()<<endl;
cout<<v.back()<<endl;
for (int i = v.begin(); i != v.end() ; ++i)
{
    /* code */
}

cout<<v.push_back()<<endl;
return 0;
}