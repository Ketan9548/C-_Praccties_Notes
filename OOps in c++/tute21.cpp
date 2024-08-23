#include <iostream>
using namespace std;

class employee
{
private:
    int a, b;

public:
    int c = 21, d = 54;
    void setdata(int a1, int b1); // declaration
                                  //   void setdata(int a1, int b1){
                                  //     a = a1;
                                  //     b = b1;
                                  //   }
    void getdata()
    {
        cout << "the value of a is: " << a << endl;
        cout << "the value of b is: " << b << endl;
        cout << "the value of c is: " << c << endl;
        cout << "the value of d is: " << d << endl;
    }
};

// declayer he setdata function using scope resolution operator (::)
void employee::setdata(int a1, int b1)
{
    a = a1;
    b = b1;
}
int main()
{
    employee kapil;
    // kapil.a =43; // because a is private so we have not to access directlly a
    kapil.setdata(3, 5);
    kapil.getdata();

    return 0;
}