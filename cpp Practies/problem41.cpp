// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, colum;
//     cout<<"enter the value of row and colum";
//     cin>>row>>colum;
//     for (int i = 0; i <= row; i++)
//     {
//         for (int j = 0; j <= colum; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;

//     }

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int r;
//     cin >> r;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//    int n;
//    cin>>n;
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        sum = sum +n;
//    }
//    cout<<sum;

// return 0;
// }

#include <iostream>
using namespace std;
// using std::string;

int main()
{
    // int n=10;
    // cout << "enter the number n: " << endl;
    // cin >> n;
    int even = 0;
    int odd = 0;
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            i = even++;
        }
        else if (i%2!=0)
        {
            sum2 = sum2 + i;
            i = odd++;
        }
        
    }
    cout<<even<<endl;
    cout<<odd<<endl;
    cout << sum << endl;
    cout << sum2 << endl;

    return 0;
}