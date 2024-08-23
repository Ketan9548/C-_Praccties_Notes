#include<iostream>
using namespace std;
int currentsum(int a[],int l, int sum){
   
    for (int i = 0; i < l; i++)
    {
        int currentsum = a[i];
        if (currentsum == sum)
        {
            cout<<i<<endl;
        }
        else{
            for (int j = i+1; j < l; j++)
            {
                currentsum = currentsum + a[j];
                if (currentsum == sum)
                {
                    cout<<"index "<<i<<" to index "<<j<<endl;
                }
                
            }
            
        }
    }
    
}
int main()
{
  int a[6]={1, 4, 20, 3, 10, 5};
  int l = sizeof(a)/sizeof(a[0]);
  int sum = 5;
  currentsum(a, l, sum);
return 0;
}