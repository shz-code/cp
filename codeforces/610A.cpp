// Problem: A. Pasha and Stick
// Contest: Codeforces Round #337 (Div. 2)
// URL: https://codeforces.com/problemset/problem/610/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Math
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

#define FAST  ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"

void solve()
{
	ll n;
	cin>>n;
	ll tmp = n/2;
	if(n % 2 != 0) 
	{
		cout<<0<<nl;
		return;
	}
	if(tmp % 2 == 0) cout<<(tmp/2)-1<<nl;
	else cout<<tmp/2;
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