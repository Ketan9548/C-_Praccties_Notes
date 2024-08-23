// Constructors in c++
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Constructor is a special member function with same name as of the class.
    // it is used to initializ the objects of it's class.
    // it is automatically invoked whenever an object is created
    // Constructor declaration
    complex(void);
    void printdata()
    {
        cout << "your number is: " << a << " +" << b << "i" << endl;
    }
};
// Constructor invoked
// This is a default constructor
complex ::complex(void)
{
    a = 10;
    b = 7;
    cout << "Kapil Chauhan" << endl;
}
int main()
{
    complex k, k1, k2;
    k.printdata();
    k1.printdata();
    k2.printdata();
    return 0;
}
/*
charactoristics in constructor
1. It should be declared in the public section in the class
2. They are automatically invoked whenever the objects is created
3. they cannot return values and do not have return types
4. it can have default arguments
5. we can not refer to their address
*/