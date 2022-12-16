// Number Theory
// Problem: https://codeforces.com/contest/1762/problem/B
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define pb push_back

void solve()
{
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<pair<ll,ll>> ans;
    for(int i=0;i<n;i++)
    {
        ll x = (1<<(ll)(log2(a[i])+1));
        if(x-a[i]>0) ans.pb({i+1,(x-a[i])});
    }
    cout<<ans.size()<<nl;
    for(auto val:ans) cout<<val.F<<" "<<val.S<<nl;
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}