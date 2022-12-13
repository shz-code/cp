// Implementation
// Problem: https://codeforces.com/problemset/problem/1771/B
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);  cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v) v.begin(),v.end()

void solve()
{
	int n,m;
    cin>>n>>m;
    vector<int> v(n+1,0);
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        v[b] = max(v[b],a);
    }
    ll l = 0,sum=0;
    for(int i=1;i<=n;i++)
    {
    	if(v[i] == 0) sum += (i-l);
    	else
    	{
    		if(l<v[i]) l = v[i];
    		sum += (i-l);
    	}
    }
    cout<<sum<<nl;
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