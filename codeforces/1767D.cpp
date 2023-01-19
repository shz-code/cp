// Greedy
// Problem: https://codeforces.com/problemset/problem/1767/D
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define pb push_back

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int z=0,o=0;
	for(int i=0;i<n;i++)
	{
		if(s[i] == '1') o++;
		else z++;
	}
	int mn = (1<<o)-1;
	int mx = (1<<z)-1;
	int range = (1<<n);
	for(int i=1;i<=range;i++)
	{
		if(i-mn > 0 and i+mx <= range) cout<<i<<" ";
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