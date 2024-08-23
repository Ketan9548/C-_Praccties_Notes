// Call by value and call by reference
#include <iostream>
using namespace std;
// it is not working
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// Now it is working using pointer (address of the value)
// void swapPointer(int *a, int *b) // Call by reference using pointers
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
int & swapreferencevar(int &a, int &b) // Call by reference variables
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 5, y = 7;
    cout << "the value of x is: " << x << " or value of y is: " << y << endl;
    // swap(x, y) // it is not working
    // swapPointer(&x, &y); // this is swapping x and y value
    swapreferencevar(x, y);
    swapreferencevar(x, y) = 323; // we ahve to change the value of x
    cout << "the value of x after swapping is: " << x << " or value of y after swapping is: " << y << endl;
    return 0;
}