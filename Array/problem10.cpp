#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{3, 4, 5}, {45, 32, 12}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "the element arr[" << i << "][" << j << "] : " << arr[i][j] << endl;
        }
    }

    return 0;
}