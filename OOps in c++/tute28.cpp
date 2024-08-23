#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int data2;

public:
    void setdata(int value2)
    {
        data2 = value2;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "summing data of X and Y objects given me: " << o1.data + o2.data2;
}
int main()
{
    X a;
    a.setdata(8);

    Y b;
    b.setdata(9);

    add(a, b);
    return 0;
}