// https://www.spoj.com/problems/PT07Z/
// Diameter of tree
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
int maxD, maxNode;

void dfs(int i,int d)
{
	if(visited[i]) return;
	visited[i] = true;
	if(d > maxD){
		maxD = d;
		maxNode = i;
	}
	
	for(auto node: v[i])
	{
		if(!visited[node])
		{
			dfs(node,d+1);
		}
	}
}

void solve()
{
	int n;
	cin>>n;
	int tmp = n;
	tmp--;
	while(tmp--)
	{
		int x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	
	maxD = 0;
	dfs(1,0);
	
	for(int i=1;i<=n;i++) visited[i] = false;
	
	maxD = 0;
	dfs(maxNode,0);
	
	cout<<maxD;
}

int main()
{
    // Faster Input Output
    LANCER 
    int q = 1; //cin>>q;
    for (int i=1;i<=q;i++)
    {
        // cout<<"Scenario #"<<i<<": "<<nl;
        solve();
    }
    return 0;
}
