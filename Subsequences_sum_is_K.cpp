#include <iostream>
#include <vector>
using namespace std;

void fun(int arr[],int i ,int n, vector<int> v, int sum,int k)
{
    if(i>=n) 
    {
        if(sum==k)
      {  for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;}
        return;
    }
    v.push_back(arr[i]);
    fun(arr,i+1,n,v,sum+arr[i],k);
    v.pop_back();
    fun(arr,i+1,n,v,sum,k);
}

int main() {
    
    int arr[]={3,1,2};
    vector<int> ans;
  fun(arr,0,3,ans,0,6);
    return 0;
}
