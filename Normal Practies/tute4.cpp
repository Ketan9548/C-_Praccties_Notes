#include<iostream>
using namespace std;
int glo = 8; // global variabal
void sum(){
    int a;
    cout<<glo;
}
int main()
{
    int glo = 17; // local variaval
    // int a= 4;
    // int b = 6;
    int a=4, b =6;
    float c = 5.74;
    char C = 'k';
    bool e = false;
    sum();
    // cout<<"the value of a is: "<<a<<endl
    // <<" the value of b is: "<<b<<endl;
    // cout<<"the value of c is: "<<c<<endl;
    // cout<<"the value of C is: "<<C;
    cout<<glo<<endl<<e;
    return 0;
}