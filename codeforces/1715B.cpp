// Problem: B. Beautiful Array
// Contest: Codeforces Round #816 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1715/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Greedy
// Problem Rating: 1000
  
 
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
	ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vector<ll> v(n);
    ll fst_in = (k*b);
    ll tmp = s-fst_in;
    v[0] = fst_in;
    if(tmp < 0) cout<<-1<<nl;
    else
    {
        for(int i=0;i<n;i++)
        {
            ll ans = min(k-1, tmp);
            v[i] += ans;
            tmp -= ans;
        }
        if(tmp > 0) cout<<-1<<nl;
        else
        {
        	for(auto val:v) cout<<val<<" ";
        	cout<<nl;
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