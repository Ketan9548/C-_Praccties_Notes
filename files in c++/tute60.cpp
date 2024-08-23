#include<iostream>
#include<fstream>
using namespace std;
/*
the useful classes for working with files in c++ are:
1.fstreambase
2.ifstream --> derived by the fstreambase
3.ofstream --> derived by the fstreambase
*/

int main()
{
  string st = "kapil chauhan";
  string st2;
//   // opening file using constructors and writting it
//   ofstream out("sample60.txt"); // Write operation 
//   out<<st;

//   opening files using constructors and reding it
     ifstream in("sample60b.txt"); // read operation
    //  in>>st2;
    getline(in, st2);
     cout<<st2;
return 0;
}