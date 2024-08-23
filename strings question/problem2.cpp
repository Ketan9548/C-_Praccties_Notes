#include<iostream>
#include<string>
using namespace std;

int main()
{
   string str = "KAPIL";
   char c;
   for (int i = 0; i < str.length(); i++)
   {
      c = str[i];
      str[i] = tolower(c);
   }
   cout<<str;
   
return 0;
}