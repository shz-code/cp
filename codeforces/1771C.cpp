// Number Theory
// Problem: https://codeforces.com/problemset/problem/1771/C
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);  cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v) v.begin(),v.end()

const ll N = 1e6 + 123;
vector<bool> is_prime(N, true);
vector<ll> prime;

void sieve()
{
    for (ll i = 2; i <= N; i++)
    {
        if (is_prime[i] == true)
        {
            prime.push_back(i);
            for (ll j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}

void prime_factorization(ll n,auto &mp)
{
    for(ll i=0; i<prime.size() and prime[i]*prime[i]<=n;i++)
    {
    	if(n % prime[i] == 0)
    	{
	        while(n % prime[i] == 0)
	        {
	            n /= prime[i];
	        }
	        mp[prime[i]]++;
        }
    }
    if(n>=1 && n!=1) mp[n]++;
}

void solve()
{
	int n;
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        prime_factorization(a[i],mp);
    }
    bool flag = false;
    for(auto val:mp) 
    {
    	if(val.second > 1) 
    	{
    		flag = true;
    		break;
    	}
    }
    cout<<(flag?"YES":"NO")<<nl;
}

int main()
{
    sieve();
    // Faster Input Output
    FAST 
    int q=1; cin>>q;
    while (q--)
    {
        solve();
    }
    return 0;
}