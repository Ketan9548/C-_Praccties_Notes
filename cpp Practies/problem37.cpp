#include <iostream>
using namespace std;
void encryption(){
     char a[100];
     char b;
     int i,key;
     cout<<"enter the encrytion message: "<<endl;
     cin>>a;
     cout<<"enter the key: "<<endl;
     cin>>key;
     for (int i = 0; a[i] != '\0'; i++)
     {
          b = a[i];
          if (b>='a' && b<='z')
          {
            b = b+key;
            if (b>'z')
            {
                b=b-'z'+'a'-1;
            }
            a[i] = b;
          }

          else if (b>='A' && b<='Z')
          {
              b = b+key;
              if (b>'Z')
              {
                 b=b-'Z'+'A'-1;
              }
              a[i]=b;
          }
          
          
     }
     cout<<"encryption message is: "<<a<<endl;
}
void decryption(){
     char a[100];
     char b;
     int i,key;
     cout<<"enter the encrytion message: "<<endl;
     cin>>a;
     cout<<"enter the key: "<<endl;
     cin>>key;
     for (int i = 0; a[i] != '\0'; i++)
     {
          b = a[i];
          if (b>='a' && b<='z')
          {
            b = b-key;
            if (b>'z')
            {
                b=b-'z'-'a'+1;
            }
            a[i] = b;
          }

          else if (b>='A' && b<='Z')
          {
              b = b-key;
              if (b>'Z')
              {
                 b=b-'Z'-'A'+1;
              }
              a[i]=b;
          }
          
          
     }
     cout<<"decryption message is: "<<a<<endl;
}
int main()
{ 
    // int choice;

    encryption();
    decryption();
    return 0;
}