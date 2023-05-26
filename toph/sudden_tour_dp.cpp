// DP
// https://toph.co/p/sudden-tour
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define nl "\n"
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define pb push_back

const int MX = 105, W = 1e5+123;
ll dp[MX][W];
ll a[MX],b[MX];

ll calc(int n,int w)
{
    if(w == 0 or n < 0) return 0;
    if(dp[n][w] != -1) return dp[n][w];
    // Not taking current index
    ll ans = calc(n-1,w);
    // Taking current index
    if(w-a[n]>=0)
    {
        ans = max(ans, calc(n-1,w-a[n])+b[n]);
    }
    return dp[n][w] = ans;
}

void solve()
{
	memset(dp,-1,sizeof(dp));
    int n,c;
    cin>>n>>c;
    int cnt=0;
    int tmp = n;
    while(tmp--) 
    {
        ll x,y;
        cin>>x>>y;
        a[cnt] = x;
        b[cnt] = y;
        cnt++;
    }
    cout<<calc(n-1,c)<<nl;
}

int main()
{
    // Faster Input Output
    FAST 
    int q = 1; cin>>q;
    for (int i=1;i<=q;i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}