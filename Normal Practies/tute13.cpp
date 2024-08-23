// Arrays
// Arrays is the same data types colections
#include <iostream>
using namespace std;

int main()
{
    // First way to represent the array
    int marks[4] = {32, 45, 65, 78};
    int mathsmarks[4];
    // mathsmarks[0] = {43};
    // mathsmarks[1] = {53};
    // mathsmarks[2] = {83};
    // mathsmarks[3] = {49};
    // cout << "this is the maths marks" << endl;
    // cout << mathsmarks[0] << endl;
    // cout << mathsmarks[1] << endl;
    // cout << mathsmarks[2] << endl;
    // cout << mathsmarks[3] << endl;
    // cout << "this is the marks" << endl;
    // cout << marks[0] << endl;
    // marks[2] = 678; // You can update the value in arrays
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // Using loop print a array
    // for (int i = 0; i < 4; i++)
    // {
    //      cout<<"the value of marks is: "<<i<<" is: "<<marks[i]<<endl;
    // }

    // Pointers in arrays
    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    // cout<<"the value of *p is: "<<*p<<endl;
    // cout<<"the value of *(p+1) is: "<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is: "<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is: "<<*(p+3)<<endl;

    return 0;
}