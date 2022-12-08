// DP
// Problem: https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 1e5+123;
int n;
ll dp[MX];

void solve()
{
	cin>>n;
	ll a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	dp[1] = 0;
	dp[2] = abs(a[2]-a[1]);
	for(int i=3;i<=n;i++) 
	{
		dp[i] = min(abs(a[i-1]-a[i])+dp[i-1],abs(a[i-2]-a[i])+dp[i-2]); 
	}
	cout<<dp[n]<<nl;
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}