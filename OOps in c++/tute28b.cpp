// Friend function
#include <iostream>
using namespace std;
class k2;
class k1
{
    int value1;

public:
    int setdata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1 << endl;
    }
    friend void exchange(k1 &, k2 &);
};
class k2
{
    int value2;

public:
    int setdata(int b)
    {
        value2 = b;
    }
    void display(void)
    {
        cout << value2 << endl;
    }
    friend void exchange(k1 &, k2 &);
};
// Call by refrence
void exchange(k1 &m, k2 &n)
{
    int temp = m.value1;
    m.value1 = n.value2;
    n.value2 = temp;
}
int main()
{
    k1 s;
    k2 h;
    s.setdata(54);
    h.setdata(43);
    exchange(s, h);
    cout << "the value is: ";
    s.display();
    cout << "the value is: ";
    h.display();
    return 0;
}