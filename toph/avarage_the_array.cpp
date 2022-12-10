// BS
// Problem: https://toph.co/p/average-the-array
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 5e5+123;;
ll dp[MX];

void solve()
{
	ll n;
	cin>>n;
    ll a[n+1];
    a[0] = 0;
    ll sum=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        sum += a[i];
        dp[i] = sum/i;
    }
	ll t;
	cin>>t;
	while(t--)
	{
		ll k;
		cin>>k;
		ll lo=0,hi=n;
		while(hi-lo>1)
		{
			ll mid = (lo+hi)>>1;
			if(dp[mid] < k) lo = mid;
			else hi = mid - 1;
		}      
		if(dp[hi]<k) cout<<hi<<nl;
		else cout<<lo<<nl;
	}
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