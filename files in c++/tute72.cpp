// list in c++
#include <iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    // 4 3 2 7
    list<int> list1;
    list1.push_back(6);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(7);
    list1.push_back(5);
    display(list1);
    list1.pop_back();
    display(list1);

    list<int> list2(5);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 21;
    iter++;
    *iter = 28;
    iter++;
    *iter = 24;
    iter++;
    *iter = 2;
    iter++;
    *iter = 10;
    iter++;
    display(list2);

    return 0;
}