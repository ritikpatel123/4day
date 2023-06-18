#include <iostream>
#include <vector>
using namespace std;

int fun(int arr[],int i ,int n, int sum,int k)
{
    if(i>=n) 
    {
        // if condition satisfied return 1 else return 0;
        if(sum==k)  return 1; 
        return 0;
    }

    int x=fun(arr,i+1,n,sum+arr[i],k);
    int y=fun(arr,i+1,n,sum,k);
    // add all value returned from function call and return it;
    return x+y;
}

int main() {
    
    int arr[]={1,1,2};
  cout<<fun(arr,0,3,0,2);
    return 0;
}
