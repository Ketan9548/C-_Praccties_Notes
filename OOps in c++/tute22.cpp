#include <iostream>
#include <string>
using namespace std;
// OOPs --> classes and objects
// c++ --> initially called --> c with classes by stroustroup
// structured had limitations
//      - members are public
//      - no methods
// classes --> structures + more
// classes --> it is have methodes and properties
// classes --> can make few members are private and few members are public
// Structure in c++ are typedefed
// you can declare objectes along with the classes declaration like this:
/* class employess{
   class definition
} kapil, rohan, ketan;
*/
// ketan.salary = it makes no sense if salary is private
class binary
{
    string s;

public:
    void display(void);
    void ones(void);
    void read(void)
    {
        cout << "enter the binary number: " << endl;
        cin >> s;
    }
    void chk_binary(void);
};
void binary::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "encorrect binary formate: " << endl;
            exit(0);
        }
    }
}
void binary::ones(void)
{
    chk_binary(); // this is the nesting function declaration
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary k;
    k.read();
    // k.chk_binary();
    k.ones();
    k.display();
    return 0;
}