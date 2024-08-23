// // calculated the fibonacci series using recurssion
// // #include <iostream>
// // using namespace std;
// // int fib(int n)
// // {
// //     if (n == 0)
// //     {
// //         return 0;
// //     }
// //     if (n == 1)
// //     {
// //         return 1;
// //     }
// //     return fib(n - 1) + fib(n - 2);
// // }
// // int main()
// // {
// //     int n = 6;
// //     cout << fib(n) << endl;
// //     return 0;
// // }

// // using DP solve that problem
// #include <iostream>
// using namespace std;
// // Top down approach
// int dp[n];
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }
//     // memoise

//     return dp[n] = fib(n - 1) + fib(n - 2);
// }
// int main()
// {
//     memset(dp, -1, sizeof(dp));
//     int n = 5;
//     cout << fib(n);

//     return 0;
// }