// BS
// Problem: https://www.spoj.com/problems/AGGRCOW/
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 1e5+123;
int n,c;
int a[MX];

bool valid(int mid)
{
	int last_pos = a[0];
	int cow = c - 1;
	for(int i=1;i<n;i++)
	{
		if(a[i] - mid >= last_pos)
		{
			last_pos = a[i];
			cow--;
		}
		if(cow == 0) return true;
	}
	return cow == 0;
}

void solve()
{
	cin>>n>>c;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int lo = 0, hi = 1e9;
	while(hi - lo > 1)
	{
		int mid = (lo + hi)/2;
		if(valid(mid)) lo = mid;
		else hi = mid - 1;
	}  
	if(valid(hi)) cout<<hi<<nl;
	else cout<<lo<<nl;
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