// Problem: B. Lost Permutation
// Contest: Codeforces Round #834 (Div. 3)
// URL: https://codeforces.com/contest/1759/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Implementation
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

#define FAST  ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"
#define for(start,n) for(int i=start;i<n;i++) 

void solve()
{
	const int MX = 1e5;
	vector<int> dp(MX,0);
	
	int n,k;
	cin>>n>>k;
	int a[n+1],sum=0;
	bool flag = true;
	for(1,n+1)
	{
		cin>>a[i];
		sum += a[i];
		dp[a[i]]++;
	}
	sort(a+1,a+1+n);
	int cnt=1;
	while(1)
	{
		if(dp[cnt] == 0)
		{
			k -= cnt;
			dp[cnt]++;
		}
		if(k == 0) break;
		else if(k < 0)
		{
			flag = false;
			break;
		}
		cnt++;
	}
	if(!flag)
	{
		cout<<"NO"<<nl;
		return;
	}
	for(1,a[n])
	{
		if(dp[i] == 0) flag = false;
	}
	cout<<(flag? "YES" : "NO")<<nl;
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