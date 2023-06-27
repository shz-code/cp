#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define nl "\n"
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define pb push_back


void solve()
{
	int n,x;
	cin>>n>>x;
	vector<int> a(n),b(n),c(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	int mn = min(a[0],b[0]);
	mn = min(mn,c[0]);
	
	if(mn > x) 
	{
		cout<<"NO"<<nl;
		return;
	}
	if(x == 0 || x == mn)
	{
		cout<<"YES"<<nl;
		return;
	}
	if(a[0] == mn) dp();
	if(b[0] == mn) dp();
	if(c[0] == mn) dp();
}

int main()
{
    // Faster Input Output
    FAST
    int q = 1; cin>>q;
    for (int i=1;i<=q;i++)
    {
        //cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
