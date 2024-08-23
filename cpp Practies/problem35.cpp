// How do you reverse a given string in place? 
// #include <iostream>
// using namespace std;

// int main()
// {
//     string a = "kapil chauhan";
//     for (int i = a.length()-1; i >=0 ; i--)
//     {
//         cout<<a[i];
//     }
    
//     return 0;
// }

// How do you print duplicate characters from a string?
#include<iostream>
#include<string>
using namespace std;

int main()
{
   string k = "kapil";
   int a = 1;
   for (int i = 0; i < k.length(); i++)
   {
      char ch = k.at(i);
      for (int j = i+1; j < k.length(); j++)
      {
         if(k.at(i)==k.at(j)){
            a++;
         }
      }
      if(a>1){
         cout<<ch<<"\t"<<a<<endl;
      }
      a=1;
      
   }
return 0;
}