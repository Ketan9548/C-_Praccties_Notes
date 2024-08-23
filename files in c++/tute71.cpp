// Vectors
#include <iostream>
#include <vector>
using namespace std;
template <class k>
void display(vector<k> &v){
    // cout<<"my name is kapil chauhan"<<endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;
}
int main()
{
    // ways to create a vector
    vector<int> vec1; // Zero length vector
    vector<char> vec2(4); // 4-element character vector
    // vec2.push_back('3');
    // vec2.push_back('30');
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6,14); // 6 element of 14s
    display(vec4); 
    // int element, size;
    // cout<<"enter the size of the vectors"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vectors";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter, 32);
    // // vec1.insert(iter+1, 32);
    // vec1.insert(iter+1, 6, 32);
    // display(vec1);

    return 0;
}