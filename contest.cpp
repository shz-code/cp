#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

ll n,c,d,mx,sum;
const int MX = 2e5+123;
ll a[MX];

int check(int mid)
{
	
}

void solve()
{
	cin>>n>>c>>d;
	mx = 0,sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mx = max(mx,a[i]); 
	}
	if(c > mx*d) cout<<"Impossible"<<nl;
	else if(mx*d == c) cout<<0<<nl;
	else if(mx >= c) cout<<"Infinity"<<nl;
	else
	{
		int lo=0,hi=d;
		for(int i=0;i<n;i++)
		{
			sum += a[i];
		}
		cout<<sum*(2022/12)-100000000000;
	}
}

int main()
{
    //Faster Input Output
    FAST
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}