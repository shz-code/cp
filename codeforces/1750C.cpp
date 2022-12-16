// Constructive Algorithm
// Problem: https://codeforces.com/problemset/problem/1750/C
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v,x) v.begin(),v.end(),x

void solve()
{
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	vector<pair<int,int>> v;
	bool eq = false, ueq = true;
	if(a == b) eq = true;
	for(int i=0;i<n;i++)
	{
		if(a[i] == b[i]) 
		{
			ueq = false;
			break;
		}
	}
	if(!eq and !ueq)
	{
		cout<<"NO"<<nl;
		return;
	}
	for(int i=1;i<n;i++)
	{
		if(b[i]!=b[i-1])
		{
			v.push_back({1,i});
			swap(eq,ueq);
		}
	}
	if(b[0] == '1')
	{
		v.push_back({1,1});
		v.push_back({2,n});
	}
	if(ueq) v.push_back({1,n});
	cout<<"YES"<<nl<<v.size()<<nl;
	for(auto val:v) cout<<val.first<<" "<<val.second<<nl;
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}