// https://www.codechef.com/problems/FIRESC
// Connected Components and CC size
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
#define mod 1000000007

const int MX = 1e5+123;

vector<bool> visited(MX,false);
vector<vector<int>> v(MX);
int c_size;

void dfs(int i)
{
	visited[i] = true;
	c_size++;
	
	for(auto node: v[i])
	{
		if(!visited[node])
		{
			dfs(node);
		}
	}
}

void solve()
{
	int n,m;
	cin>>n>>m;

	for(int i=0;i<=n;i++)
	{
		v[i].clear();
		visited[i] = 0;
	}

	while(m--)
	{
		int x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	
	int cc = 0;
	ll res = 1;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			c_size = 0;
			cc++;
			dfs(i);
			res = (res * c_size) % mod;
		}
	}
	cout<<cc<<" "<<res<<nl;
}

int main()
{
    // Faster Input Output
    LANCER 
    int q = 1; cin>>q;
    for (int i=1;i<=q;i++)
    {
        // cout<<"Scenario #"<<i<<": "<<nl;
        solve();
    }
    return 0;
}
