// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
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

const int MX = 1e5+123;
vector<bool> visited(MX,false);

void dfs(int i,vector<vector<int>> &v)
{
	if(visited[i]) return;
	visited[i] = true;
	
	for(int j=0;j<v[i].size();j++)
	{
		dfs(v[i][j],v);
	}
}

void solve()
{
	int n,e;
	cin>>n>>e;
	vector<vector<int>> v(n+1);
	while(e--)
	{
		int x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	int ans = 0;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			dfs(i,v);
			ans++;
		}
	}
	cout<<ans;
}

int main()
{
    // Faster Input Output
    FAST 
    int q = 1; // cin>>q;
    for (int i=1;i<=q;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
