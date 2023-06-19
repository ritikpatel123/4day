class Solution {
public:
   void comsum(vector<int>& arr,vector<vector<int>>& ans,vector<int> v,int target,int i)
    {
        if(i >=arr.size() )
        {
           if(target==0) ans.push_back(v);
           return;
        }
        if(arr[i]<=target)
        {  v.push_back(arr[i]);
        comsum(arr,ans,v,target-arr[i],i);
         v.pop_back();
        }
        comsum(arr,ans,v,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        comsum(candidates,ans,v,target,0); 
        return ans;
    }
};
