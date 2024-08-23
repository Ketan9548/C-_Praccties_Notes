// #include <iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"enter the value a and b is: "<<endl;
//     cin>>a>>b;
//     if(a==b){
//         cout<<(a+b)*3;
//     }
//     else if (a!=b)
//     {
//         cout<<a+b;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int test(int a, int b)
{
    if (a == b)
    {
        return (a + b) * 3;
    }
    else if (a != b)
    {
        return a + b;
    }
};
int main()
{
    cout << test(2, 3) << endl;
    cout << test(5, 3) << endl;
    cout << test(3, 3) << endl;
    return 0;
}