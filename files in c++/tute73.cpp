#include <iostream>
#include <map>
#include <string>
using namespace std;
// map is in associative array
int main()
{
    map<string, int> pricemap;
    pricemap["sugar"] = 120;
    pricemap["Gee"] = 600;
    pricemap["Aata"] = 70;
    pricemap.insert({{"rice",140}, {"oil", 150}}); // insert command for inserting the element
    map<string, int>::iterator iter; // this make for access the map
    for (iter = pricemap.begin(); iter != pricemap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout<<"the size of the map: "<<pricemap.size()<<endl;
    cout<<"the max size of the map: "<<pricemap.max_size()<<endl; // this is the max function return value  
    return 0;
}