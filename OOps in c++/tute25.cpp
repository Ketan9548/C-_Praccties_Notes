// Array in objects
#include <iostream>
using namespace std;
class employee
{
    int id;
    float salary;

public:
    void setid(void)
    {
        salary = 123.45;
        cout << "enter the id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "the id of employee is: " << id << endl;
    }
};

int main()
{
    employee ketan, harsh, rohan;
    // ketan.setid();
    // ketan.getid();

    // harsh.setid();
    // harsh.getid();

    // rohan.setid();
    // rohan.getid();

    employee fb[10];
    for (int i = 1; i < 10; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}