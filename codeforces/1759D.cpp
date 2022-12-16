// Number Theory
// Problem: https://codeforces.com/problemset/problem/1759/D
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void prime_fact(int n,auto &mp)
{
	for(int i : {2,5})
	{
		while(n % i == 0)
		{
			n /= i;
			mp[i]++;
		}
	}
}

void solve()
{
	map<int,int> mp;
	int n,m;
	cin>>n>>m;
	prime_fact(n,mp);
	int num,k;
	if(mp[2] > mp[5])
	{
		num = mp[2] - mp[5];
		k = 5;
	}
	else
	{
		num = mp[5] - mp[2];
		k = 2;
	}
	ll multi = 1;
	while(num--)
	{
		if(multi*k <= m) multi *= k;
		else break;
	}
	while(1)
	{
		if(multi*10 <= m) multi *= 10;
		else break;
	}
	multi = (m/multi) * multi;
	cout<<1LL*n*multi<<nl;
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