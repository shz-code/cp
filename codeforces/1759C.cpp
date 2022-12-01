// Problem: C. Thermostat
// Contest: Codeforces Round #834 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1759/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Greedy
// Rating: 1100
  
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
    ll l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b)
    {
        cout<<0<<nl;
        return;
    }
    if(abs(b-a) >= x) cout<<1<<nl;
    else if((a+x > r && a-x < l) || (b+x > r && b-x < l))
    {
        cout<<-1<<nl;
    }
    else
    {
        if(a+x <= r && a-x >= l)
        {
        	if(r-b >= x || b-l >= x) cout<<2<<nl;
        	else cout<<3<<nl;
        }
        else if(a+x <= r)
        {
        	if(r-b >= x) cout<<2<<nl;
        	else cout<<3<<nl;
        }
        else if(a-x >= l)
        {
        	if(b-l >= x) cout<<2<<nl;
        	else cout<<3<<nl;
        }
    }
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