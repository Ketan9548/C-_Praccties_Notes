#include <iostream>
using namespace std;
int c =54; // this the global variabal
int main()
{
    // int a, b, c;
    // cout<<"the value of a is: "<<endl;
    // cin>>a;
    // cout<<"the value of b is: "<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"the sum is c: "<<c<<endl;
    // cout<<"the sum is c: "<<::c<<endl; // :: this the way to print the global variabal here the global variabele is 54

    // *************** Float, Double, and long double Literals *******************
    // float d = 54.87f; // (54.87f) this use for function overloading 
    // long double e = 32.5l;
    // cout<<"the size of 54.87f is: "<<sizeof(54.87)<<endl;
    // cout<<"the size of 54.87f is: "<<sizeof(54.87f)<<endl;
    // cout<<"the size of 54.87F is: "<<sizeof(54.87F)<<endl;
    // cout<<"the size of 54.87l is: "<<sizeof(54.87l)<<endl;
    // cout<<"the size of 54.87L is: "<<sizeof(54.87L)<<endl;
    // cout<<"the value of d is: "<<d<<" the value of e is: "<<e;

    // ************** Reference Variables ***************
    // Kapil --> Ketan --> cool buddey --> conding boy
    // float x = 545;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y;

    // ************* TypeCasting ************
    float a = 54.67; // it is converting as a int value 
    int b = 32;
    // Both are same
    cout<<"the value of a is: "<<(int)a<<endl;
    cout<<"the value of a is: "<<int(a);
    int c = int(a);
    cout<<"the value is expression: "<<a+b<<endl;
    cout<<"the value is expression: "<<c+b<<endl;
    cout<<"the value is expression: "<<c+b<<endl;

    return 0;
}