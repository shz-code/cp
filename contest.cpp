#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"
#define for(start,n) for(int i=start;i<n;i++) 

void solve()
{
	int l,r,x,a,b;
	cin>>l>>r>>x;
	cin>>a>>b;
	int ltar=-1e9,rtar=1e9;
	if(a-b == 0) cout<<0<<nl;
	else if(abs(a-b) >= x) cout<<1<<nl;
	else
	{
		if(abs(b-l) < x && abs(b-r) < x )
		{
			cout<<-1<<nl;
		}
		else
		{
			ltar = b-x;
			rtar = b+x;
			cout<<ltar<<" "<<rtar<<" "<<nl;			
		}

	}
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