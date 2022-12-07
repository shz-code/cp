// Problem: C. Almost All Multiples
// Contest: https://codeforces.com/contest/1758/problem/C
// URL: Codeforces Round #836 (Div. 2)
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Implementation
  
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

void solve()
{
	int n,x;
	cin>>n>>x;
	int a[n+1];
	for(int i=1;i<=n;i++) a[i]=i;
	if(n % x) cout<<-1<<nl;
	else
	{
		a[1] = x;
		if(a[x] != n)
		{
			a[x] = n;
			for(int i=2;i<n;i++)
			{
			    if(i%x == 0 && n%i == 0)
			    {
					swap(a[i],a[x]);
					x=i;
				}
			}
		}
		a[n] = 1;
		cout<<a[1]<<" ";
		for(int i=2;i<n;i++)
		{
			cout<<a[i]<<" ";
		} 
		cout<<a[n]<<nl;
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