// https://toph.co/p/knapsack
// Topic: Knapsack, DP

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

const int MX = 1e6+123;
int dp[MX];

void solve()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.pb({x,y});
	}
	for(int i=0;i<n;i++)
	{
		for(int j = k;j >= v[i].F ;j--)
		{
			dp[j] = max(dp[j] , dp[j - v[i].F]+v[i].S);
		}
	}
	cout<<dp[k]<<nl;
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