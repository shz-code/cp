// https://www.spoj.com/problems/PPATH/
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

const int MX = 9999;
vector<bool> visited(MX,false);
vector<vector<int>> v(MX);
vector<int> dist(MX,-1);
vector<int> primes;
vector<bool> is_prime(MX,true);

void sieve() {
	for(int i=2;i<=MX;i++)
	{
		if(is_prime[i])
		{
			if(i >= 1000)	primes.pb(i);
			for(int j=i*2;j<=MX;j+=i) is_prime[j] = false;
		}
	}
}

bool isValid(int a,int b)
{
	int cnt = 0;
	while(a)
	{
		if((a%10) != (b%10)) cnt++;
		a /= 10;
		b /= 10;
	}
	if(cnt == 1) return true;
	return false;
}

void buildGraph()
{
	for(int i=0;i<(int)primes.size();i++)
	{
		for(int j=i+1;j<(int)primes.size();j++)
		{
			int a = primes[i];
			int b = primes[j];
			if(isValid(a,b))
			{
				v[a].pb(b);
				v[b].pb(a);
			}
		}	
	}
}

void bfs(int x)
{
	queue<int> q;
	q.push(x);
	visited[x] = true;
	dist[x] = 0;
	
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

void cleanV() {
	for(int i=0;i<MX;i++)
	{
		visited[i] = false;
		dist[i] = -1;
	}
}

void solve()
{
	cleanV();

	int x,y;
	cin>>x>>y;
	bfs(x);	
	cout<<dist[y]<<nl;
}

int main()
{
	sieve();
	buildGraph();
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
