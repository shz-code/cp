// Problem: E. Binary Inversions
// Contest: Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1760/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
// Rating: 1100
  
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

int n;
const int MX = 2e5+123;
int a[MX];

ll calc()
{
	ll sum=0,res=0;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==0) res++;
		else sum+= res;
	}
	return sum;
}

void solve()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	ll ans = calc();
	for(int i=0;i<n;i++)
	{
		if(a[i] == 0)
		{
			a[i] = 1;
			ans = max(ans,calc());
			a[i] = 0;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(a[i] == 1)
		{
			a[i] = 0;
			ans = max(ans,calc());
			a[i] = 1;
			break;
		}
	}
	cout<<ans<<nl;
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