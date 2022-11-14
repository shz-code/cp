// Problem: C. Minimum Varied Number
// Contest: Codeforces Round #811 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1714/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Greedy
  
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
	string res="";
	for(int i=9;i>0;i--)
	{
		if(n >= i)
		{
			res = char(i + '0') + res;
			n -= i;
		}
	}
	cout<<res<<nl;
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