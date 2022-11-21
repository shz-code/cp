#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define nl "\n"

double check(int n,double m)
{
	double ans = 1.0;
	for(int i=1;i<=n;i++)
	{
		ans *= m;
	}
	return ans;
}

void solve()
{
	double n,m;
	cin>>n>>m;
	double low=1,high=m;
	while(high - low > 1e-6)
	{
		double mid = (high+low)/2.0;
		if(check(n,mid) > m)
		{
			high = mid;
		}
		else
		{
			low = mid;
		}
	}
	cout<<low<<" "<<high;
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