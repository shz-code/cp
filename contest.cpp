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
int a[MX];

int dp(int n)
{
	if(n == 1) return 1;
    int ans = 1;
    for(int i=0;i<n;i++)
    {
        if(a[n] > a[i])
        {
            ans = max(ans,dp(i)+1);
        }
    }
    cout<<n<<nl;
    return ans;
}

void solve()
{
	int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        ans = max(ans,dp(i));
    }
    //cout<<dp(7);
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