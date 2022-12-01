// Problem: B. Worms
// Contest: Codeforces Round #271 (Div. 2)
// URL: https://codeforces.com/problemset/problem/474/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Implementation
// Rating: 1200
  
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define F first
#define S second

const int MX = 1e6+123;
int ind[MX];

void solve()
{
	int n;
    cin>>n;
    int a[n];
    ll sum=0;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i];
        v.push_back(sum);
        ind[sum] = i+1;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	int x;
    	cin>>x;
    	auto lb = lower_bound(v.begin() , v.end() , x);
        cout<<ind[*(lb)]<<nl;
    }
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