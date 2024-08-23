#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 211916801;
    long long b = 97592151379235457;
    char c = 'k';
    float v = 19856.992;
    double m = -5279235.721231465;
    // cin>>a>>b>>c>>v>>m;
    cout << a << endl
         << b << endl
         << c << endl;
    // cout << setprecision(3);
    cout<<fixed<<setprecision(3);
    cout << v << endl;
    cout<<fixed<<setprecision(9);
    // cout << setprecision(9);
    cout << m << endl;
    return 0;
}
// fixed is use for the manupulator in c++ it means fixed() operatore get the value after the points 