int fun(int row,int col,vector<vector<int>> &dp,vector<vector<int>> &mat)
{
    if(row==0 ) 
    {
        return mat[row][col];
    }
    if(col>=mat[0].size() || row>=mat.size() || col<0) return -1e8;
    if(dp[row][col]==-1) return dp[row][col];
    int maxi=INT_MIN;
   
      
          int x= mat[row][col]+fun(row-1,col,dp,mat);
          int y=mat[row][col]+fun(row-1,col-1,dp,mat);
          int z=mat[row][col]+fun(row-1,col+1,dp,mat);
          maxi=max(x,y,z);
    
    return dp[row][col]=maxi;
}
int getMaxPathSum(vector<vector<int>> &mat)
{
    int n=mat.size();
    int m=mat[0].size();
    vector<vector<int>> dp(n,vector<int>(m,0));
    int maxi=INT_MIN;
    for(int i=0;i<m;i++)
    {
         maxi=max(fun(n-1,i,dp,mat),maxi);
    }
   return   maxi;
