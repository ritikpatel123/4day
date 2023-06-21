#include <bits/stdc++.h> 
int fib(int n,vector<long long>& dp) {
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    dp[n]=countWays(n-1,dp)+countWays(n-2,dp);
    return dp[n];

}
int fibonacchi(int n)
{
    vector<long long> dp(n+1,-1);
    return fib(n, dp);
}
