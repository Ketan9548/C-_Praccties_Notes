#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // first way to print the vector
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    // Second way to print the vector using iterator
    // it is work with the pointer
    // vector<int> :: iterator it;
    // for ( it = v.begin(); it!=v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }

    // for(auto element:v){
    //     cout<<element<<" ";
    // }

    v.pop_back();
    
    vector<int> v2(3,40);
    // value is 40,40,40


    return 0;
}