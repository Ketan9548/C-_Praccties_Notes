// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 21;
//     int *b;
//     b = &i;
//     cout<<&i;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 2, b = 3;
//     int temp;
//     cout << "before swap value is: " << a << " " << b << endl;
//     temp = a;
//     a = b;
//     b = temp;
//     cout << a << " and " << b << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 43, b=54;
//     cout<<"before swapping the value is: "<<a<<" "<<b<<endl;
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<"After swapping the value is: "<<a<<" "<<b<<endl;
// return 0;
// }



#include<iostream>
using namespace std;
int swapvalue(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a=2,b=3;
    cout<<"before swapping value: "<<a<<" "<<b<<endl;
    cout<<swapvalue(&a,&b);
    cout<<"the value of the a and b after swapping: "<<a<<" "<<b<<endl;
return 0;
}