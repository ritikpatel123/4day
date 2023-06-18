using namespace std;

bool fun(int arr[],int i ,int n, vector<int> v, int sum,int k)
{
    if(i>=n) 
    {
        if(sum==k)
      {  for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
         return true; 
      }
        return false;
    }
    v.push_back(arr[i]);
    if(fun(arr,i+1,n,v,sum+arr[i],k)== true) return true;
    v.pop_back();
     if(fun(arr,i+1,n,v,sum,k)== true) return true;
    return false;
}

int main() {
    
    int arr[]={1,1,2};
    vector<int> ans;
  fun(arr,0,3,ans,0,2);
    return 0;
}
