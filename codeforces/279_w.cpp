// Problem: B. Books
// Contest: Codeforces Round #171 (Div. 2)
// URL: https://codeforces.com/contest/279/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
// Problem Rating: 1400
  
 
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
	ll n,k,sum=0,cnt=0;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) 
    {
    	sum += a[i];
    	if(sum <= k)
    	{
    		cnt++;
    	}
    	else{
    		sum -= a[i];
    	}
    }
    cout<<cnt<<nl;
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