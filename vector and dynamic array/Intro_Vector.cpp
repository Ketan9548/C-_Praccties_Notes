#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    // numbers.push_back(0);
    for (int i = 0; i <= 10; i++)
    {
        numbers.push_back(i);
    }

    // there are two more functionality in vector they are do insert and erase the element
    // numbers.insert(numbers.begin() + 5, 88);
    // numbers.erase(numbers.begin()+5);
    
    // there are two methode to print the number in vectors
    // 1 methode
    for (int number : numbers)
    {
        cout << number << endl;
    }

    // 2 methode
    // vector<int>::iterator it;
    // for (auto it = numbers.begin(); it != numbers.end(); it++)
    // {
    //     // cout<<it<<endl; it is showing the error
    //     cout << *it << endl; // print the element
    //     cout << &it << endl; // address of the iterator
    //     cout << &(*it) << endl; // address of the element
    // }
    // for (auto it = numbers.cbegin(); it != numbers.cend(); it++)
    // {
    //     *it = 20; // you can not change the value of the it  with the cbegin and cend function
    //     cout << *it << endl; // print the element
    // }

    // auto it = numbers.begin();
    // cout << *(it + 5);

    // diffrent diffrent functionality
    // cout << "size: " << numbers.size() << endl;
    // cout << "Max size: " << numbers.max_size() << endl;
    // cout << "Capacity: " << numbers.capacity() << endl;
    // numbers.resize(5);
    // cout << "size: " << numbers.size() << endl;
    // if (numbers.empty())
    // {
    //     cout << "vector is empty\n"
    //          << endl;
    // }
    // else
    //     cout << "vector is not empty\n"
    //          << endl;

    // cout << "Element [0] is: " << numbers[0] << endl;
    // cout << "Element at(0) is: " << numbers.at(0) << endl;
    // cout << "Front: " << numbers.front() << endl;
    // cout << "Back: " << numbers.back() << endl;
    // numbers.clear();
    // cout << "size: " << numbers.size() << endl;

    return 0;
}