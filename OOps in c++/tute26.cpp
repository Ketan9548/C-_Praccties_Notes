// Friend function
#include <iostream>
using namespace std;
// 1+8i
// 2+6i
// ----
// 3+14i
class complex
{
    int a, b;

public:
    // we have to make sumcomplex as a friend function
    friend complex sumcomplex(complex o1, complex o2); // this is friend function declaration
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber(void)
    {
        cout << "your number is " << a << " +" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex k1, k2, sum;
    k1.setnumber(6, 8);
    k1.printnumber();

    k2.setnumber(4, 6);
    k2.printnumber();

    sum = sumcomplex(k1, k2);
    sum.printnumber();
    return 0;
}