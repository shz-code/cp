// Implementation
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v) v.begin(),v.end()
#define F first
#define S second

void solve()
{
	int n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    if(sum % 2 == 0)
    {
        cout<<0<<nl;
        return;
    }
    ll ans = INT_MAX;
    for(int i=0;i<n;i++)
    {
    	ll cnt = 0;
        if(a[i]%2 == 0)
        {
        	while(a[i]%2 != 1)
        	{
        		a[i] = a[i] / 2;
        		cnt++;
        	}
        }
        else
        {
        	while(a[i]%2 != 0)
        	{
        		a[i] = a[i] / 2;
        		cnt++;
        	}
        }
        if(cnt > 0) ans = min(ans,cnt);
    }
    cout<<ans<<nl;
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}