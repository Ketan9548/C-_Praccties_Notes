// #include <iostream>
// using namespace std;

// int main()
// {
//     int n1=0,n2=1,n3,number;
//     cout<<"enter the number"<<endl;
//     cin>>number;
//     cout<<n1<<" "<<n2<<" ";
//     for (int i = 2; i <= number; i++)
//     {
//         n3 = n1+n2;
//         cout<<n3<<" ";
//         n1=n2;
//         n2=n3;
//     }

//     return 0;
// }

// using recursion
// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     return fib(n - 1) + fib(n - 2);
// }
// int main()
// {
//     int n;
//     cout << "enter the value of n: " << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << fib(i) << " ";
//     }

//     return 0;
// }