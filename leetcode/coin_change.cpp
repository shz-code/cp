// Leetcode
// https://leetcode.com/problems/coin-change/
// Topic: Coin Change, DP

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

const int MX = 1e4+123;
int dp[MX];

int coinChange(vector<int>& coins, int amount) {
	if(amount == 0) return 0;
	if(dp[amount] != 0) return dp[amount];
	int ans = INT_MAX;
	for(auto coin:coins)
	{
		if(amount - coin >= 0)
			ans = min(ans + 0LL, coinChange(coins, amount-coin) + 1LL);
	}
	return dp[amount] = ans;
}

void solve()
{
	vector<int> coins = {1,2,5};
	int amount = 11;
	int ans = coinChange(coins,amount);
	if(ans == INT_MAX) cout<<-1;
	else cout<<ans;
}

int main()
{
    // Faster Input Output
    FAST 
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}