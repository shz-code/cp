// Topic: Implementation
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int n;
	cin>>n;
	vector<ll> v,ck(n,0);
	for(int i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			ll tmp = v[i]*v[i]+v[j]*v[j];
			for(int k=j+1;k<n;k++)
			{
				if(v[k]*v[k] == tmp) ck[i] = ck[j] = ck[k] = 1;
			}
		}
	}
	cout<<count(ck.begin(),ck.end(),1);
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