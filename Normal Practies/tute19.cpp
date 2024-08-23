// Function overloading
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << "function with 2 argument" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "function with 3 argument" << endl;
    return a + b + c;
}
// calculate the valume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}
// volume of cube is
int volume(int a)
{
    return a * a * a;
}
// valume of rectangular box
int volume(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    cout << "the sum of the 2 argument is: " << sum(4, 7) << endl;
    cout << "the sum of the 3 argument is: " << sum(4, 7, 9) << endl;
    cout<<"the volume of the rectangular box is: "<<volume(4,6,3)<<endl;
    cout<<"the volume of the cube is: "<<volume(6)<<endl;
    cout<<"the volume of the cylinder is: "<<volume(3,5)<<endl;
    return 0;
}