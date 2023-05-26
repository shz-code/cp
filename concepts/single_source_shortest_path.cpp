// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
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
vector<int> dist(MX);

void dfs(int location,int d)
{
	if(visited[location]) return;
	
	visited[location] = true;
	dist[location] = d;
	
	for(auto node: v[location])
	{
		dfs(node,d+1);
	}
}

void solve()
{
	int n; cin>>n;
	int tmp = n; tmp--;
	while(tmp--)
	{
		int x,y; cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	dfs(1,0);
	int g, ans = 0, mn = INT_MAX; cin>>g;
	while(g--)
	{
		int loc; cin>>loc;
		if(dist[loc] < mn)
		{
			 ans =  loc;
			 mn = dist[loc];
		}
		else if(dist[loc] == mn && loc < ans) ans = loc;
	}
	cout<<ans;
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
