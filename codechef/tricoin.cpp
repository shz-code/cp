// Problem: Coins And Triangle
// URL: https://www.codechef.com/problems/TRICOIN
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Topic: Binary Search
  
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

ll n;

bool check(ll mid)
{
    ll ans=(mid*(mid+1))/2;
    return ans <= n;
}

void solve()
{
    cin>>n;
    ll lo = 0, hi = n;
    while(hi - lo > 1)
    {
        ll mid = (lo+hi)/2;
        if(check(mid)) lo = mid;
        else hi = mid - 1;
    }
    if(check(hi)) cout<<hi<<nl;
    else cout<<lo<<nl;
}

int main()
{
    //Faster Input Output
    FAST
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}