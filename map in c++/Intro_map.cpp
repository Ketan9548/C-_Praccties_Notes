#include <iostream>
// #include<unordered_map>
#include <map>
#include <string>
using namespace std;

int main()
{
    // it is print the pair first and second element in by alphabet (a to z)
    map<string, string> Restorent_manue;
    // unordered_map<string, string> Restorent_manue;
    Restorent_manue.insert(pair<string, string>("allo_burger", "salty"));
    Restorent_manue.insert(pair<string, string>("cake", "sweet"));
    Restorent_manue.insert(pair<string, string>("momoas", "unhelthy"));
    Restorent_manue.insert(pair<string, string>("chilly garlik juies", "spicy"));
    // Restorent_manue.clear();
    cout<<Restorent_manue.size()<<endl;
    for (auto pair : Restorent_manue)
        cout << pair.first << " - " << pair.second << endl;

    return 0;
}