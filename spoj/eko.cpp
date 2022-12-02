// Problem: EKO
// URL: https://www.spoj.com/problems/EKO/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Topic: Binary Search
  
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

ll n,m;
const int MX = 1e6+123;
ll a[MX];

bool check(ll mid)
{
    ll ans=0;
    for(int i=0;i<n;i++)
    {
    	if(a[i] >= mid) ans += (a[i] - mid);
    }
    return ans>=m;
}

void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    ll lo = 0, hi = 1e9;
    while(hi - lo > 1)
    {
        ll mid = (lo+hi)/2;
        if(check(mid)) lo = mid;
        else hi = mid - 1;
    }
    if(check(hi)) cout<<hi;
    else cout<<lo;
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