// make a class friend function
#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex o1, complex o2);
    int sumcompcomplex(complex o1, complex o2);
};
class complex
{
    int x, y;

public:
    // indivisually declaration friend fuction
    // friend int calculator::sumrealcomplex(complex, complex);
    // friend int calculator::sumcompcomplex(complex, complex);
    // aliter friend fuction declaration
    friend class calculator;
    void setvalue(int a1, int a2)
    {
        x = a1;
        y = a2;
    }
    void printnumber(void)
    {
        cout << "your number is " << x << " +" << y << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.x + o2.x);
}
int calculator::sumcompcomplex(complex o1, complex o2)
{
    return (o1.y + o2.y);
}
int main()
{
    complex k1, k2;
    k1.setvalue(4, 6);
    k1.printnumber();
    k2.setvalue(7, 9);
    k2.printnumber();
    calculator real, comp;
    int m = real.sumrealcomplex(k1, k2);
    cout << "the sum of the real part is: " << m << endl;
    int n = comp.sumcompcomplex(k1, k2);
    cout << "the sum of the real part is: " << n << endl;
    return 0;
}