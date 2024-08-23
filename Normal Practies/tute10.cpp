#include <iostream>
using namespace std;
int main()
{
    /*Loops in c++
    There are 3 types of loops in c++
    1. for loop
    2. while loop
    3. do-while loop
    */
    /* syntax of for loop
    for(initialization; condition; updation)
    {
     loop body(c++ code);
    }
    */
    /*For loop in c++*/
    // int a;
    // cout << "enter the value of a: " << endl;
    // cin >> a;
    // for (int i = 1; i <= a; i++)
    // {
    //     cout << i << endl;
    // }
    /* infinte loop
    int a;
    for (int i = 1; i <= a; i++)
    {
        cout << i << endl;
    } */

    /* While loop
    syntax::
    while(Condition){
        c++ statements;
    }
    // */
    // int i = 1;
    // while (i <= 50)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    /* infinite while loop
     int i =1;
     while(true){
        cout<<i<<endl;
        i++;
     }
    */

    /* Do-while loop
    do{
     c++ statements;
    }while(condition)
    */
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 40);

    return 0;
}