#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size = 0;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++) {
         cin>>arr[i];
    }
    for (int i = size-1; size > 0; size--) {
         cout<<arr[size-1]<<" ";
    }
    
    return 0;
}
