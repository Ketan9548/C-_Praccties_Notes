#include <iostream>
#include "hero.cpp"
using namespace std;
class hero
{
    // properties of hero
public:
    // string name;
    char name[100];
    int helth;
    char level;
};
int main()
{
    hero h1;
    h1.helth = 300;
    h1.level = 'k';
    h1.name = {'m','j'};
    cout << h1.helth << endl;
    cout << h1.name << endl;
    cout << h1.level << endl;
    cout << "size" << sizeof(h1) << endl;
    return 0;
}