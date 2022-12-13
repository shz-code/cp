// BS
// Problem: https://codeforces.com/problemset/problem/1760/F
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);  cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 2e5+123;
ll a[MX],n,c,d;

bool valid(ll k)
{
	if(k==0) return a[0]*d>=c;
    k++;
    ll sum=0;
    if(k >= n)
    {
        for(int i=0;i<n;i++) sum += a[i];
    }
    else
    {
        for(int i=0;i<k;i++) sum += a[i];
    }
    ll total = d/k;
    ll got = total*sum;
    ll rem = d%k;
    if(rem >= n) got += sum;
    else 
    {
        for(int i=0;i<rem;i++) got += a[i];
    }
    return got>=c;
}

void solve()
{
	cin>>n>>c>>d;
	ll sum=0;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,greater<ll>());
	for(int i=0;i<min(n,d);i++) sum+=a[i];
	if(sum>=c)
	{
		cout<<"Infinity"<<nl;
		return;
	}
	if(a[0]*d < c) cout<<"Impossible"<<nl;
	else
	{
		ll lo = 0, hi = 2e5+123;
		// TTTTTTTFFFFFFFF
		while(hi - lo > 1)
		{
			ll mid = (hi+lo) >> 1;
			if(valid(mid)) lo = mid;
			else hi = mid - 1;
		}
		if(valid(hi)) cout<<hi<<nl;
		else cout<<lo<<nl;
	}
}

int main()
{
    // Faster Input Output
    FAST 
    int q=1; cin>>q;
    while (q--)
    {
        solve();
    }
    return 0;
}