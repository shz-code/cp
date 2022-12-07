// Implementation
// Problem: https://codeforces.com/problemset/problem/227/B

#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 1e5+123;
int dp[MX];

void solve()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[a[i]] = i;
	}
	int t;
	cin>>t;
	ll sum1=0,sum2=0;
	while(t--)
	{
		int x;
		cin>>x;
		sum1 += dp[x];
		sum2 += (n-dp[x])+1;
	}
	cout<<sum1<<" "<<sum2;
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