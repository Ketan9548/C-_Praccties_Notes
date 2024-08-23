// Controal Stuctures
#include <iostream>
using namespace std;
int main()
{
    // selection controal structures --> if-else-if-else ladder
    int age;
    cout << "enter your age: " << endl;
    cin >> age;
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "you can not come to my party: " << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "you are eligibal but you must have a entry card" << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "you are not born" << endl;
    // }
    // else
    // {
    //     cout << "you can come my party" << endl;
    // }
    // selection controal structures --> switch case statement
    switch (age)
    {
    case 32:
        cout << "you are a good boy" << endl;
        break;
    case 43:
        cout << "you are a cool boy" << endl;
        break;
    case 21:
        cout << "you are a nice boy" << endl;
        break;

    default:
        cout << "no case found" << endl;
        break;
    }
    return 0;
}