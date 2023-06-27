// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
// bfs
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
vector<vector<int>> v(MX);
vector<int> dist(MX,-1);

void bfs(int st)
{
	queue<int> q;
	q.push(st);
	visited[st] = true;
	dist[st] = 0;
	
	while(!q.empty())
	{
		int curr = q.front();
		q.pop();
		
		for(auto node: v[curr])
		{
			if(!visited[node])
			{
				q.push(node);
				visited[node] = true;
				dist[node] = dist[curr] + 1;
			}
		}
	}
}

void clearV(int n)
{
	for(int i=0;i<=n;i++)
	{
		v[i].clear();
		visited[i] = false;
		dist[i] = -1;
	}
}

void solve()
{
	int n,m;
	cin>>n>>m;

	clearV(n);
	
	while(m--)
	{
		int x,y; cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	bfs(1);
	
	cout<<dist[n]<<nl;
}

int main()
{
    // Faster Input Output
    FAST
    int q = 1; cin>>q;
    for (int i=1;i<=q;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
