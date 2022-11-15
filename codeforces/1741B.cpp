// Problem: B. Funny Permutation
// Contest: Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1741/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Constructive Algorithms
// Rating: 800
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int n;
	cin >> n;
	if (n == 3)
	{
		cout << -1 << nl;
		return;
	}
	int mid = n/2,cnt=1;
	for (int i = 0; i < mid; i++)
	{
		cout << n - i << " ";
	}
	for (int i = mid; i < n; i++)
	{
		cout << cnt << " ";
		cnt++;
	}
	cout << nl;
}
int main()
{
	// Faster Input Output
	FAST int q;
	cin >> q;
	while (q--)
	{
		solve();
	}
	return 0;
}