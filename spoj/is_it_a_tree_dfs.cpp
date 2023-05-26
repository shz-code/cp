// https://www.spoj.com/problems/PT07Y/
#include<bits/stdc++.h>
using namespace std;

#define LANCER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define nl "\n"
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define pb push_back

const int MX = 1e5+123;

vector<bool> visited(MX,false);
vector<vector<int>> v(MX);

void dfs(int i)
{
	if(visited[i]) return;
	
	visited[i] = true;
	
	for(auto node: v[i])
	{
		dfs(node);
	}
}

void solve()
{
	int n,m;
	cin>>n>>m;
	if(m != n-1)
	{
		cout<<"NO"<<nl;
		return;
	}
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	dfs(1);
	for(int i=1;i<=n;i++)
	{
		if(visited[i] == 0)
		{
			cout<<"NO"<<nl;
			return;
		}
	}
	cout<<"YES"<<nl;
}

int main()
{
    // Faster Input Output
    LANCER 
    int q = 1; // cin>>q;
    for (int i=1;i<=q;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
