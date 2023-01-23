// Leetcode
// https://leetcode.com/problems/coin-change-ii/
// Topic: Coin Change 2, DP

#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define nl "\n"
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define pb push_back

const int MX = 1e4+123,n = 305;
int dp[n][MX];


int solve(int n,vector<int>& coins, int amount)
{
	if(amount == 0) return 1;
	if(n < 0) return 0;
	if(dp[n][amount] != -1) return dp[n][amount];

	int ans = 0;
	for(int i=0;i<=amount;i+=coins[n])
	{
		ans += solve(n-1,coins, amount-i);
	}
	return dp[n][amount] = ans;
}

int coinChange(int n,vector<int>& coins, int amount) {
	memset(dp,-1,sizeof(dp));
	return solve(n,coins,amount);
}

int main()
{
    // Faster Input Output
    FAST 
    int q=1; //cin>>q;
    while(q--)
    {
		vector<int> coins = {5};
		int amount = 6;
        cout<<coinChange(coins.size()-1 ,coins,amount);
    }
    return 0;
}