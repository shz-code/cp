// Problem: B. Promo
// Contest: Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1697/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Greedy
// Problem Rating: 900
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"

const ll MX = 2e5+123;
ll prefix[MX];

void solve()
{
	ll n,t;
	cin>>n>>t;
	ll a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<ll>());
	for(int i=1;i<=n;i++)
	{
		prefix[i] = a[i] + prefix[i-1];
	}
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		cout<<prefix[x] - prefix[x-y]<<nl;
	}
}
int main()
{
	// Faster Input Output
	FAST 
	int q=1;
	//cin >> q;
	while (q--)
	{
		solve();
	}
	return 0;
}