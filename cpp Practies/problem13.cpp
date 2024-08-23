#include <iostream>
#include <cstring>
using namespace std;
int calculateascii(string m)
{
    int sum = 0;
    for (int i = 0; i < m.length(); i++)
    {
        char ch = m[i];
        sum += int(ch);
    }
    cout<< "the value is: "<<sum;
}
void checkmark(string n){
    char z = n[n.length()-1];
    if (z == '.' || z == '?' || z == '!' )
    {
        char *n = strtok(n," .!?");
        int *count = n.countTokens();
    }
    else {
        cout<<"it is the valid character"<<endl;
    }
    
}
int main()
{
    string k;
    cout << "Enter a string: ";
    getline(cin, k);
    cout << "You string is: " << k << endl;
    calculateascii(k);
    return 0;
}