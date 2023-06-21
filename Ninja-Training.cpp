#include <bits/stdc++.h>
int fun(int ind,int last,vector<vector<int>> &dp,vector<vector<int>> &points)
{
    if(ind==0)
    {
        int maxi=0;
        for(int i=0;i<3;i++)
        {
            if(i!=last) maxi=max(maxi,points[ind][i]);
        }
        return maxi;
    }

 if(dp[ind][last]!=-1) return dp[ind][last];
    int maxi=0;
    for(int i=0;i<3;i++)
    {
        if(i!=last)
        {
            int point= points[ind][i]+fun(ind-1,i,dp,points);
            maxi=max(maxi,point);
        }
    }
    return dp[ind][last]=maxi;
    }
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n,vector<int>(4,-1));
    return fun(n-1,3,dp,points);
}

