// Problem: B. Odd Grasshopper
// Contest: Codeforces Round #753 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1607/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Math
// Rating: 900
  
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

void solve()
{
	ll n,x;
	cin>>n>>x;
	for(ll i=x/4*4+1; i<=x; i++) n += ( n&1 ? i : -i );
	cout<<n<<nl;
}
int main()
{
	// Faster Input Output
	FAST 
	int q;
	cin >> q;
	while (q--)
	{
		solve();
	}
	return 0;
}