// Topic: Math
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	ll n,a,b;
    cin>>n>>a>>b;
    if(a <= b)
    {
    	ll tmp = n/a;
    	if(tmp * a < n) tmp++;
    	cout<<tmp<<nl;
    	return;
    }
    ll ans = 0,cnt = 0;
    if((a-b)+a > b)
    {
    	cout<<1<<nl;
    	return;
    }
	while(ans < n)
	{
		cnt++;
		ans += (a - b) + a;
	}
	cout<<cnt<<nl;
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