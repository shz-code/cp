// DP
// Problem: https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);  cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v) v.begin(),v.end()

const int MX= 1e5+123;
vector<int> dyno(MX,-1);
int h[MX],k;

int dp(int n)
{
    if(n == 1) return 0;
    if(dyno[n] != -1) return dyno[n];
    int cost = INT_MAX;
    for(int i=1;i<=k;i++)
    {
    	if(n - i > 0)
			cost = min(dp(n-i) + abs(h[n] - h[n-i]),cost);	
    }
    return dyno[n] = cost;
}

void solve()
{
	int n;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>h[i];
    cout<<dp(n);
}

int main()
{
    // Faster Input Output
    FAST 
    int q=1; //cin>>q;
    while (q--)
    {
        solve();
    }
    return 0;
}