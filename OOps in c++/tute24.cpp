// Static variabal
#include <iostream>
using namespace std;
class employee
{
    int id;
    // int count;
    static int count; // this is static variaval and it is the class member

public:
    void setdata(void)
    {
        cout << "enter the Id: " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "your employee id is: " << id << "and the employee number is: " << count << endl;
    }
    static void getcount(void){
        // cout<<id; through an error
        cout<<"the value of count is: "<<count<<endl;
    }
};

int employee::count=10; // default value is 0
// int employee::count; // default value is 0

int main()
{
    employee kapil, rohan, harsh;
    kapil.setdata();
    kapil.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    harsh.setdata();
    harsh.getdata();
    employee::getcount();
    return 0;
}