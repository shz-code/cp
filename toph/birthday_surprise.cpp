// Number Theory
// Problem: https://toph.co/p/birthday-surprise
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define pb push_back

const int MX = 1e5+123;
ll pre[MX];
vector<bool> is_prime(MX,true);

void sieve()
{
	is_prime[0] = is_prime[1] = false;
	for(ll i=2;i*i<=MX;i++)
	{
		if(is_prime[i])
		{
			for(ll j=i*i;j<=MX;j+=i) is_prime[j] = false;
		}
	}
}

void solve()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		pre[i] = a[i] + pre[i-1];
	}
	int t,ans=0;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		ll res = pre[r] - pre[l-1];
		if(is_prime[res]) ans++;
	}
	if(ans > 0)
	{
		if(ans > 3) ans = 3;
		cout<<"Sokina Khatun will be ";
		while(ans--) cout<<"very ";
		cout<<"happy!";
	}
	else cout<<"Adnan bhai, Priyom dada, Shuvo bhai will forever be single!";
}

int main()
{
	sieve();
    //Faster Input Output
    FAST
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}