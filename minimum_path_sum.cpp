#include <bits/stdc++.h> 

int fun(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp)
{
  if(i==0 && j==0 ) return grid[i][j];
  if(i<0 || j<0) return INT_MAX;

  if(dp[i][j]!=-1) return dp[i][j];

  int up=grid[i][j]+fun(i-1,j,grid,dp);
  int left=grid[i][j]+fun(i,j-1,grid,dp);

  return dp[i,j]=min(up,left);

}



int minSumPath(vector<vector<int>> &grid) {
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    return fun(n-1,m-1,gird,dp);
}
