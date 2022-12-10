// BS
// Problem: https://toph.co/p/buildings
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 1e5+123;
ll a[MX],n,k;

bool valid(ll mid)
{
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] <= mid) ans += mid - a[i];
    }
    return ans <= k;
}

void solve()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    ll lo=0,hi=1e12;
    // TTTTTTTFFFFFFFFF
    while(hi-lo>1)
    {
        ll mid = (lo+hi)>>1;
        if(valid(mid)) lo = mid;
        else hi = mid - 1;
    }
    if(valid(hi)) cout<<hi<<nl;
    else cout<<lo<<nl;
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