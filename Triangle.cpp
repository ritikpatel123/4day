public:

    int fun(int row,int col,vector<vector<int>>& dp,vector<vector<int>>& triangle)
    {
        if(row==triangle.size()-1) 
        {
            return triangle[row][col];
        }

        if(dp[row][col]!=-1) return dp[row][col];
        int x=triangle[row][col]+fun(row+1,col,dp,triangle);
        int y=triangle[row][col]+fun(row+1,col+1,dp,triangle);
        return dp[row][col]=min(x,y);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m= triangle[n - 1].size() + 1;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return fun(0,0,dp,triangle);
    }
};
