#include <iostream>
using namespace std;
// we have to make the inline function in below function
inline int product(int x, int y){
    return x*y;
}
// inline function is not use with the static function
// int product(int x, int y){
//     static int c=0; // this is executes only once time
//     c = c+1; // Next time this fuction is run, the value of c will be retained
//     return x*y+c;
// }

float moneyreceive(int currentmoney, float factor=1.05){
        return currentmoney*factor;
}
// int lenghtstring(const char *p){
    // const argument is use for no change in const variaval
// }
int main()
{
    // int a, b;
    int money = 100000;
    // cout<<"enter the value of a and b is: "<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceive(money)<<" after 1 year"<<endl;
    cout<<"For VIP Persoon only: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceive(money, 1.2)<<" after 1 year"<<endl;
    return 0;
}