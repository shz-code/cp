// Problem: B. Remove Prefix
// Contest: Codeforces Round #811 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1714/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
// Problem Rating: 800
  
 
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
	ll n;
	cin >> n;
	set<ll> dp;
	ll a[n],cnt=0;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for (int i = n-1; i >= 0; i--)
	{
		if(dp.count(a[i]) == 0)
		{
			dp.insert(a[i]);
			cnt++;
		}
		else break;
	}
	cout << n - cnt << nl;
}
int main()
{
	//Faster Input Output
    FAST
	int q;
	cin >> q;
	while (q--)
	{
		solve();
	}
}