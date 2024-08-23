#include <iostream>
using namespace std;

typedef struct employe
{
    /* Data */
    int Id;
    float salary;
    char favchar;
} ep;

// it is use for better money management system
union money
{
    /* Data */
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = breakfast;
    meal m2 = lunch;
    meal m3 = dinner;
    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'T';
    // m1.pounds = 68.97;
    // // we have only use one in car, rice, pound
    // cout<<m1.pounds;

    // struct employe kapil;
    // ep rohan;
    // ep shubham;
    // kapil.Id = 32;
    // kapil.salary = 12000000.00;
    // kapil.favchar = 'U';
    // cout << kapil.Id << endl;
    // cout << kapil.salary << endl;
    // cout << kapil.favchar << endl;
    return 0;
}