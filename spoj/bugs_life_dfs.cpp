// https://www.spoj.com/problems/BUGLIFE/
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
vector<int> color(MX,-1);
 
bool dfs(int i,int c)
{
	visited[i] = true;
	color[i] = c;
	
	
	for(auto node: v[i])
	{
		if(!visited[node])
		{
			if(!dfs(node,!c)) return false;
		}
		else if(visited[node] and color[node] == color[i])
		{
			return false;
		}
	}
	return true;
}
 
void solve()
{
	int n,m;
	cin>>n>>m;
 
	for(int i=0;i<=n;i++)
	{
		v[i].clear();
		visited[i] = 0;
		color[i] = -1;
	}
 
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	bool res;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			res = dfs(i,0);
			if(!res) break;
		}
	}
	cout<<(res?"No suspicious bugs found!":"Suspicious bugs found!")<<nl;
}
 
int main()
{
    // Faster Input Output
    LANCER 
    int q = 1; cin>>q;
    for (int i=1;i<=q;i++)
    {
        cout<<"Scenario #"<<i<<": "<<nl;
        solve();
    }
    return 0;
}