// Problem: Minion Chef and Bananas
// URL: https://www.codechef.com/problems/MINEAT
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Topic: Binary Search
  
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CC Handle : shz_code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

int n,x;
const int MX = 1e7+123;
ll a[MX];


bool check(int mid)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] <= mid) cnt++;
        else{
            int tmp = a[i];
            cnt += (tmp%mid == 0 ? tmp/mid : tmp/mid + 1);
        }
        if(cnt > x) return false;
    }
    return true;
}

void solve()
{
    cin>>n>>x;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx = max(mx,a[i]);
    }
    ll lo=0,hi=mx;
    while( hi - lo > 1 )
    {
    	ll mid = (lo+hi)/2;
    	if(check(mid)) hi = mid;
    	else lo = mid + 1;
    }
     if(check(lo)) cout<<lo<<nl;
     else cout<<hi<<nl;
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