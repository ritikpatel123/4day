class Solution {
public:
    int rob(vector<int>& nums) {
  

      return robber(nums);
    }


    int robber(vector<int>& value)
     {
    int n=value.size();
     int prev2=0;
     int prev=value[0];
     for(int i=1;i<n;i++)
     {
         int take=value[i];
         if(i>1) take+=prev2;
         int nottake=0+prev;
         int curi=max(take,nottake);
         prev2=prev;
         prev=curi;
     }
     return prev;
}
};
