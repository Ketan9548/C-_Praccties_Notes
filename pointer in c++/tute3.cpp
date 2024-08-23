// void pointer
#include <iostream>
using namespace std;
void printnumber(int *numberptr)
{
    cout << *numberptr << endl;
}
void printchar(char*charptr){
    cout<<*charptr<<endl;
}
void print(void*ptr,char type){
      switch(type){
        case 'i':
        cout<<*((int*)ptr)<<endl;
        break;
        case 'c':
        cout<<*((char*)ptr)<<endl;
        break;
      }   
}
int main()
{
    int number = 5;
    char c = 'a';
    // printnumber(&number);
    // printchar(&c);
    print(&number,'i');
    print(&c,'c');
    return 0;
}