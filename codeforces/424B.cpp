// BS
// Problem: https://codeforces.com/contest/424/problem/B
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 1e3+123;
int n,c;
int dp[MX];
double dist[MX];

bool valid(double mid)
{
	int pop = c;
	for(int i=0;i<n;i++)
	{
		if(mid >= dist[i]) pop += dp[i];
		if(pop >= 1e6) return true;
	}
	return pop >= 1e6;
}

void solve()
{
	cin>>n>>c;
	for(int i=0;i<n;i++)
	{
		double a,b,c;
		cin>>a>>b>>c;
		dp[i] = c;
		dist[i] = sqrt(pow(0-a,2)+pow(0-b,2));
	}
	double lo = 0.0, hi = 1000000.0;
	//FFFFFFFFTTTTTTTTTT
	while(hi - lo > 1e-6)
	{
		double mid = (lo+hi)/2.0;
		if(valid(mid)) hi = mid;
		else lo = mid;
	}  
	if(hi == 1000000.0) printf("-1\n");
	else if(valid(lo)) printf("%.7lf\n",lo);
	else printf("%.7lf\n",hi);
	
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}